#ifndef _LINK_LIST_H
#define _LINK_LIST_H

#include<stdio.h>

struct Node;
typedef struct Node*    PtrToNode;
typedef PtrToNode   List;
typedef PtrToNode   Position;

List MakeEmpty(List L);

int IsEmpty(List L);

int IsLast(Position P, List L);

Position Find(int X, List L);

void Delete(int X, List L);

Position FindPrevious(int X, List L);

void Insert(int X, List L, Position P);

void DeleteList(List L);

Position Header(List L);

Position First(List L);

Position Advance(Position P);

int Retrive(Position P);


#endif  /*_LINK_LIST_H*/
