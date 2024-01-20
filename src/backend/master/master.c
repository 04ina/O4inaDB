#include <master.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <backend.h>
#include <string.h>

#include <socket.h>

void 
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

int 
BackendStartup (int BackendDes)
{
	//BackendData 

	pid_t pid;
	
	//printf("%d",pid);
	switch (pid=fork())
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