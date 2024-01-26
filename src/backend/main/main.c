#include <main.h>
#include <master.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//#include <socket.h>

#include <getopt.h>
#include <unistd.h>

#define no_argument 0
#define required_argument 1
#define optional_argument 2

#include <buffer.h>

#include <O4inaDB.h>

#include <relation.h>

#define PushTuplesByComparison(_type, _comparison) \
do \
{ \
	_type a = 45; \
	if (a _comparison 47) printf("aboba"); \
} \
while(0)

void 
main(int argc, char *argv[])
{
	PushTuplesByComparison(int, ==);
	initBufferCache(3123);
	

//    O4inaDBMain(); 

    printf("asdfjljl");

	/*
	static struct option long_options[] = {
		{"host", required_argument, NULL, 'h'},
		{"port", required_argument, NULL, 'p'},
		{NULL, 0, NULL, 0}
	};

	int	c;

	while ((c = getopt_long(argc, argv, "h:p", long_options, NULL)) != -1)
	{
		switch (c)
		{
			case 'h':
				printf("%sffffffffffffffff\n",optarg);
				break;
			case 'p':
				break;
			default:
				// getopt_long already emitted a complaint 
				//pg_log_error_hint("Try \"%s --help\" for more information.", progname);
				exit(1);
		}
	}




	ServerLoop();
	*/

}

//void ServerLoop(void);
//pid_t AuxiliaryProcessStartup
