#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/time.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

#include <arpa/inet.h>
#include <fcntl.h>
#include <errno.h>

typedef struct SocketData 
{
	struct sockaddr_in addr;
	int des; // descriptor
} SocketData;

int CrMasterSocket(SocketData* MasterSocket);
//int CrBackendSocket(SocketData* MasterSocket);