/*------------------------------------------------------------------------- 
 *
 * master.c
 * 
 * Master is the main process that listens to clients, 
 * manage backends and auxiliary processes, allocates shared memory 
 * 
 * IDENTIFICATION 
 *      src/backend/master/master.c
 *       
 *------------------------------------------------------------------------- 
 */

#include <master.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <backend.h>
#include <string.h>

#include <socket.h>
#include <signal.h>
#include <c.h>
#include <elog.h>
#include <auxprocess.h>

#include <global_variables.h>

/* 
 * Changed after receiving a signal
 * Used in ServerLoop()
 */
static volatile bool pending_master_shutdown = false;
static volatile bool pending_child_shutdown = false;

/*
 * auxiliary process PIDs 
 */
static pid_t BgWriterPID = 0;
static pid_t CheckPointerPID = 0;
static pid_t SysLoggerPID = 0;

/*
 * Main entry point for Master process
 */
void 
Master(int argc, char *argv[])
{
	InitProcessGlobals();

	MasterProcID = ProcID;

	/*
	 * Handling POSIX signals
	 */
	signal(SIGINT,  MasterShutDownRequest);	
	signal(SIGQUIT, MasterShutDownRequest);	
	signal(SIGTERM, MasterShutDownRequest);	
	signal(SIGCHLD, ChildShutDownRequest);

	// args
	// create context
	// CreateSharedMemoryAndSemaphores();
	// SysLoggerPID = SysLogger_Start();
	// checkpointer start
	// bgwriter start

	//ServerLoop();
	
	abort();
}

static void
MasterShutDownRequest(int signal_args)
{
	pending_master_shutdown = true;
}

static void
ChildShutDownRequest(int signal_args)
{
	pending_child_shutdown = true;
}

/*
	Initialisation global variables for all types of processes
*/
void
InitProcessGlobals(void)
{
	ProcID = getpid();
}


static void 
ServerLoop(void)
{
	SocketData MasterSocket; 
	CrMasterSocket(&MasterSocket);

	fd_set readset;
    FD_SET(MasterSocket.des, &readset);
    struct timeval timeout;


    for(;;)
    {
    	timeout.tv_sec = 5;
    	timeout.tv_usec = 0;
		
		if(select(MasterSocket.des+1, &readset, NULL, NULL, &timeout) > 0)
		{

			int sock = accept(MasterSocket.des, NULL, NULL);
	        if(sock < 0)
	        {
	        	printf("socked accept error\n"); // exception
	            exit(3);
	        }	
	        fcntl(sock, F_SETFL, O_NONBLOCK);
	        BackendStartup(sock);
	        
		}
		printf("I am main, my pid - %d\n",getpid());
	}

}

static pid_t
StartAuxProcess(AuxProcType type)
{
	pid_t 	pid;

	pid = fork();

	if (pid == 0)
	{
		InitProcessGlobals();

		// memory context	

		AuxiliaryProcessMain(type);
	}

	if (pid < 0)
	{
		switch (type)
		{
			case BgWriterProcess:
				ereport(ERROR, "could not fork BgWriter process");
				// smart exit
				break;
			case CheckPointerProcess:
				ereport(ERROR, "could not fork CheckPointer process");
				// smart exit
				break;
			case SysLoggerProcess:
				ereport(ERROR, "could not fork SysLogger process");
				// smart exit
				break;
		}

		// ExitMaster

	}

	return pid;
}

static void
AuxiliaryProcessMain(AuxProcType type)
{
	switch (type)
	{
		case BgWriterProcess:
			// ProcExit 
			break;
		case CheckPointerProcess:
			// ProcExit 
			break;
		case SysLoggerProcess:
			SysLoggerMain();
			// ProcExit 
			break;
	}
}

int 
BackendStartup (int BackendDes)
{
	//BackendData 

	pid_t pid;
	
	//printf("%d",pid);

	pid = fork();
	switch (pid)
	{
	case -1:
		perror("fork");
		exit(1);
	case 0:

		//exit(1);
		printf("I am child, my pid - %d\n",getpid());
		//printf("It is child\n");
		BackendMain(BackendDes);
		exit(1);
	default:
		return pid;
		//break;	
	}
}
