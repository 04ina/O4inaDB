/*------------------------------------------------------------------------- 
 *
 * master.h
 * 
 * Master is the main process that listens to clients, 
 * manage backends and auxiliary processes, allocates shared memory 
 * 
 * IDENTIFICATION 
 *      src/include/master/master.h
 *       
 *------------------------------------------------------------------------- 
 */

#ifndef MASTER_H
#define MASTER_H

#include <sys/types.h>
#include <unistd.h>

typedef struct
{
	int pid;
	
} BackendData;


/*
 * Used for signals handling 
 */
void 
Master(int argc, char *argv[]);

static void
MasterShutDownRequest(int signal_args);
static void
ChildShutDownRequest(int signal_args);

static void
InitProcessGlobals(void);
void 
ServerLoop(void);
int 
BackendStartup (int BackendDes);

#endif  /* MASTER_H */