#include"link_list.h"

/*
 *typedef struct Node
 *{
 *    int data;
 *    Position next;
 *}Node;
 */

List InitList()
{
    List pHeader = (Position)malloc(sizeof(Node));
    pHeader->data = 0;
    pHeader->next = NULL;
    return pHeader;
}


List MakeEmpty(List L)
{
    return NULL;//test
}

int IsEmpty(List L)
{
    if (L->next == NULL)
    {
        return 1;
    }
    return 0;
}

int IsLast(Position P, List L)
{
    Position pTemp = L->next;
    if (!pTemp->next)
    {
        if(P == pTemp)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    pTemp = pTemp->next;
}

Position Find(int X, List L)
{
    Position pTemp = L;
    while (1)
    {
        if (!pTemp->next)
        {
            return NULL;
        }
        if (pTemp->next->data == X)
        {
            return pTemp->next;
        }
        pTemp = pTemp->next;
    }
}

void Delete(int X, List L)
{
    Position pNext = NULL;
    Position pPrevious = FindPrevious(X, L);
    if (!pPrevious)
    {
        //TODO:print
        return;
    }
    pNext = pPrevious->next->next;
    pPrevious->next->next = NULL;
    free(pPrevious->next);
    pPrevious->next = pNext;
}

Position FindPrevious(int X, List L)
{
    Position pTemp = L;
    while (1)
    {
        if (!pTemp->next)
        {
            return NULL;
        }
        if (pTemp->next->data == X)
        {
            return pTemp;
        }
        pTemp = pTemp->next;
    }
}


//时间复杂度: O(1)
void Insert(int X, List L, Position P)
{
    Position pInsertNode = (Position)malloc(sizeof(Node));
    pInsertNode->next = P->next;
    pInsertNode->data = X;
    P->next = pInsertNode;
}


//时间复杂度: O(n + n^2 + n + n) = O(n^2)
void DeleteList(List L)
{
    Position pNode = L->next;
    int count  = 0;

    while(pNode)
    {
        count++;
        pNode = pNode->next;
    }

    /*printf("%d\n", count);*/

    pNode = L;

    int i =0, j = 0;
    for (i = count - 1; i >=0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            pNode = pNode->next;
        }

        free(pNode->next);
        pNode = L;
    }

    pNode->next = NULL;
}

Position Header(List L)
{
    return NULL;//test
}

Position First(List L)
{
    return NULL;//test
}

Position Advance(Position P)
{
    return NULL;//test
}

int Retrive(Position P)
{
    return 0;//test
}

void PrintList(List L)
{
    Position pNode = L;
    printf("{");
    for (pNode; pNode->next != NULL; pNode = pNode->next)
    {
        if (pNode->next->next == NULL)
        {
            printf("%d}\n", pNode->next->data);
            return;
        }
        printf("%d, ", pNode->next->data);
    }
}


