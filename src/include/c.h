#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdbool.h>
#include <stdint.h>

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
typedef signed char int8;
typedef signed short int16;		
typedef signed int int32;	
typedef signed long long int int64;

/*
 * Types for unsigned intN 
 */
typedef unsigned char uint8;
typedef unsigned short uint16;	
typedef unsigned int uint32;
typedef unsigned long long int uint64;

/*
 * Types for float 
 */
typedef float float4;
typedef double float8;

/*
 * Type for names 
 */
typedef char *Name;

/*
 * String type
 */
typedef char *String;
#define max(a, b)  (((a) > (b)) ? (a) : (b)) 
#define min(a, b)  (((a) < (b)) ? (a) : (b)) 

#define MALLOC(point, data_type, size) \
    do \
    { \
        (point) = ((data_type) *) malloc((size)); \
        if ((point) == NULL) \
        { \
            fprintf(stderr, "Fatal: failed to allocate %u bytes.\n", (size) ); \
            abort(); \
        } \
    } while(0)
    
#define CALLOC(point, data_type, number, size) \
    do \
    { \
        (point) = ((data_type) *) calloc((number), (size)); \
        if ((point) == NULL) \
        { \
            fprintf(stderr, "Fatal: failed to allocate %u bytes.\n", (number) * (size) ); \
            abort(); \
        } \
    } while(0)

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