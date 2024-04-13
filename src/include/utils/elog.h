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

#ifndef ELOG_H
#define ELOG_H

#include <c.h>
#include <time_date.h>

typedef enum ErrorLevelCode {
    DEBUG,
    LOG,
    ERROR
} ErrorLevelCode;

const char *
GetELevelName(int elevel);

void
ELevelProcessing(int elevel);

#define ereport(elevel, ...)                                \
    do {                                                    \
        fprintf(stderr, "%s %s: ", GetCurTimeDateAsStr(),   \
                          GetELevelName(elevel));           \
        fprintf(stderr, __VA_ARGS__);                       \
        fputc('\n', stderr);                                \ 
        ELevelProcessing(elevel);                           \
    } while(0)

#endif  /* ELOG_H */
