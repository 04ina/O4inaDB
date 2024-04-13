/*------------------------------------------------------------------------- 
 *
 * main.c
 * 
 * Main function of Litegres
 * 
 * IDENTIFICATION 
 *      src/backend/main/main.c
 *       
 *------------------------------------------------------------------------- 
 */
#include <master.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//#include <socket.h>

#include <getopt.h>
#include <unistd.h>

/*
#define no_argument 0
#define required_argument 1
#define optional_argument 2
*/


#include <O4inaDB.h>
#include <config.h>

static void 
help(void);

/*
 * everything start here
 */

void 
main(int argc, char *argv[])
{
	/*
		O4inaDBMain();
	*/
    if (argc > 1)
    {
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
        {
            help();
            exit(0);
        }
        else if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0)
        {
            fprintf(stdout, "Litegres version: %s\n", LG_VERSION);
            exit(0);
        }
    }

    Master(argc, argv);
}

static void 
help(void)
{
    fprintf(stdout,"Options:\n"); 
}









	
//	initBufferCache(3123);
	

//    O4inaDBMain(); 

 //   printf("asdfjljl");

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


//void ServerLoop(void);
//pid_t AuxiliaryProcessStartup
