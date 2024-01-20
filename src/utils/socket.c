#include <socket.h>

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <arpa/inet.h>

char* CurrentIP(void);

int 
CrMasterSocket(SocketData* MasterSocket)
{
	MasterSocket->addr.sin_family = AF_INET;
	MasterSocket->addr.sin_port = htons(5432);
	//inet_pton(AF_INET,"127.0.0.1",&MasterSocket->addr.sin_addr);
    MasterSocket->addr.sin_addr.s_addr = htonl(INADDR_ANY);
	MasterSocket->des = socket(AF_INET, SOCK_STREAM, 0);
    if(MasterSocket->des < 0)
    {
        perror("socket");
        exit(1);
    }

    fcntl(MasterSocket->des, F_SETFL, O_NONBLOCK);

	if(bind(MasterSocket->des, (struct sockaddr *)&MasterSocket->addr, sizeof(MasterSocket->addr)) < 0)
    {
        perror("bind");
        exit(2);
    }

    listen(MasterSocket->des, 5);
    return 1;

}
/*
char* CurrentIP(void)
{
    //printf("addr=%s\n",inet_ntoa(MasterSocket->addr.sin_addr));
     

     struct ifreq ifr;
    memset(&ifr, 0, sizeof(ifr));
    strcpy(ifr.ifr_name, "eth0");

    int s = socket(AF_INET, SOCK_DGRAM, 0);
    ioctl(s, SIOCGIFADDR, &ifr);
    close(s);

    struct sockaddr_in *sa = (struct sockaddr_in*)&ifr.ifr_addr;
    
    printf("addr = %s\n", inet_ntoa(sa->sin_addr));
    return 0;

}
*/



/*
int 
CrBackendSocket(SocketData* BackendSocket)
{
	BackendSocket->addr.sin_family = AF_INET;
	BackendSocket->addr.sin_port = htons(5433);
	inet_pton(AF_INET,"127.0.0.1",&BackendSocket->addr.sin_addr);

	BackendSocket->des = socket(AF_INET, SOCK_STREAM, 0);
    if(BackendSocket->des < 0)
    {
        perror("socket");
        exit(1);
    }

    fcntl(BackendSocket->des, F_SETFL, O_NONBLOCK);

	if(bind(BackendSocket->des, (struct sockaddr *)&BackendSocket->addr, sizeof(BackendSocket->addr)) < 0)
    {
        perror("bind");
        exit(2);
    }

    listen(BackendSocket->des, 5);
    return 1;

}
*/