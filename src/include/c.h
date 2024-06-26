/*------------------------------------------------------------------------- 
 *
 * c.h
 * 
 * Extension of the C language
 * 
 * IDENTIFICATION 
 *      src/include/c.h
 *       
 *------------------------------------------------------------------------- 
 */
#ifndef C_H
#define C_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>

#include <errno.h>

/*
 * Size of any memory 
 */
typedef size_t Size;

/*
 * Instead of *void
 */
typedef char *Pointer;

/*
 * Indexing memory in an array
 */
typedef unsigned int Index;

/*
 * Array memory offset
 */
typedef signed int Offset;

/*
 * Types for signed intN 
 */
typedef signed char             int8;
typedef signed short            int16;		
typedef signed int              int32;	
typedef signed long long int    int64;

/*
 * Types for unsigned intN 
 */
typedef unsigned char           uint8;
typedef unsigned short          uint16;	
typedef unsigned int            uint32;
typedef unsigned long long int  uint64;

/*
 * Types for float 
 */
typedef float float4;
typedef double float8;

/*
 * String type
 */
typedef char *String;

/*
 * Type of comparison 
 */
typedef enum ComparisonType 
{
    CT_EQUAL,
    CT_NOT_EQUAL,
    CT_LESS,
    CT_MORE,
    CT_LESS_OR_EQUAL,
    CT_MORE_OR_EQUAL
} ComparisonType;

/*
 * Singly-linked list
 */

typedef struct SLListNode
{
    Pointer         data;
    struct SLListNode  *next;
} SLListNode;

typedef struct SLList
{
    SLListNode *head;
    SLListNode *down;
} SLList;

SLList
InitSLList(void);

void
PushHeadSLList(SLList list, Pointer data);

/*
 * Doubly-linked list
 */

typedef struct DLListNode
{
    Pointer             data;
    struct DLListNode  *next;
    struct DLListNode  *past;
} DLListNode;

typedef struct DLList
{
    DLListNode *head;
    DLListNode *down;
} DLList;

DLList
InitDLList(void);

void
PushHeadDLList(DLList list, Pointer data);

/*
 * Other 
 */

#define max(a, b)  (((a) > (b)) ? (a) : (b)) 
#define min(a, b)  (((a) < (b)) ? (a) : (b)) 

#define FOPEN(fp, name, type) \
    do \
    { \
        if (( (fp) = fopen((name), (type)) ) == NULL) \
        { \
            fprintf(stderr, "Fatal: Could not open the \"%s\" file.\n", (name) ); \
            abort(); \
        } \
    } while(0)

#define FWRITE(data, size, count, fp) \
    do \
    { \
        if ( fwrite((data), (size), (count), (fp)) == (count)) \
        { \
            fprintf(stderr, "Fatal: fwrite() error\n"); \
            abort(); \
        } \
    } while(0)

#define CHECK_MALLOC_WORK(pt) \
    do \
    { \
        if ((pt) == NULL) \
        { \
            fprintf(stderr, "Fatal: failed to allocate memory.\n"); \
            abort(); \
        } \
    } while(0)

#define CHECK_REALLOC_WORK(pt) \
    do \
    { \
        if ((pt) == NULL) \
        { \
            fprintf(stderr, "Fatal: failed to allocate memory.\n"); \
            abort(); \
        } \
    } while(0)

#define CHECK_CALLOC_WORK(pt) \
    do \
    { \
        if ((pt) == NULL) \
        { \
            fprintf(stderr, "Fatal: failed to allocate memory.\n"); \
            abort(); \
        } \
    } while(0)

#endif /* C_H */