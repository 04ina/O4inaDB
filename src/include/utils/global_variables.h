/*------------------------------------------------------------------------- 
 *
 * global_variables.h
 * 
 * Process global bariables
 * 
 * IDENTIFICATION 
 *      src/include/utils/global_variables.h
 *       
 *------------------------------------------------------------------------- 
 */

/* Current process id*/
pid_t   ProcID;
/*
#include <sys/time.h>

pg_time_t	ProcStartTime;
TimestampTz ProcStartTimestamp;
*/

/* Master process id*/
pid_t   MasterProcID;