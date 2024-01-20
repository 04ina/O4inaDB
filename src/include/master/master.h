#include <sys/types.h>
#include <unistd.h>

typedef struct
{
	int pid;
	
} BackendData;

void ServerLoop(void);
int BackendStartup (int BackendDes);


