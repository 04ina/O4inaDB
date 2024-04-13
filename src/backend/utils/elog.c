/*------------------------------------------------------------------------- 
 *
 * elog.c
 * 
 * error logging and reporting
 * 
 * IDENTIFICATION 
 *      src/backend/utils/elog.c
 *       
 *------------------------------------------------------------------------- 
 */

#include <elog.h>

const char *
GetELevelName(int elevel)
{
    const char *buf;

    switch(elevel)
    {
        case DEBUG:
            buf = "DEBUF";
            break; 
        case LOG:
            buf = "LOG";
            break; 
        case ERROR:
            buf = "ERROR";
            break; 
    }

    return buf;
}

void
ELevelProcessing(int elevel) 
{
    if (elevel >= ERROR)
    {
        abort();
    }    
}
