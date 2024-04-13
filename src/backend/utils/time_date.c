/*------------------------------------------------------------------------- 
 *
 * time_date.c
 * 
 * Working with times and dates 
 * 
 * IDENTIFICATION 
 *      src/include/utils/time_date.c
 *       
 *------------------------------------------------------------------------- 
 */

#include <time_date.h>

const char *
GetCurTimeDateAsStr(void)
{
    time_t      rawtime;
    struct tm   *timeinfo;
    char  *result_str;

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    result_str = asctime(timeinfo);
    result_str[strlen(result_str) - 1] = '\0';

    return result_str; 
}
