/*------------------------------------------------------------------------- 
 *
 * c.c
 * 
 * Extension of the C language
 * 
 * IDENTIFICATION 
 *      src/utils/c.c
 *       
 *------------------------------------------------------------------------- 
 */

#include "../c.h"

/*
 * Singly-linked list
 */

SLList
InitSLList(void)
{
    SLList list;

    list.head = NULL;
    list.down = NULL;

    return list;
}

void
PushHeadSLList(SLList list, Pointer data)
{
    SLListNode  *node; 

    node = (SLListNode *) malloc(sizeof(SLListNode));
    CHECK_MALLOC_WORK(node);

    if (list.head == NULL && \
        list.down == NULL)
    {
        node->next = NULL;

        list.head = node;
        list.down = node;
    }
    else
    {
        node->next = NULL;
    
        list.head->next = node;
        list.head = node;
    }
}
/*
 * Doubly-linked list
 */

DLList
InitDLList(void)
{
    DLList list;

    list.head = NULL;
    list.down = NULL;

    return list;
}

void
PushHeadDLList(DLList list, Pointer data)
{
    DLListNode  *node; 

    node = (DLListNode *) malloc(sizeof(DLListNode));
    CHECK_MALLOC_WORK(node);

    if (list.head == NULL && \
        list.down == NULL)
    {
        node->next = NULL;
        node->past = node;

        list.head = node;
        list.down = node;
    }
    else
    {
        node->next = NULL;
        node->past = list.head;
    
        list.head->next = node;
        list.head = node;
    }
}
