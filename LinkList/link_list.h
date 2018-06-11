#ifndef _LINK_LIST_H
#define _LINK_LIST_H

#include<stdio.h>
#include<stdlib.h>

struct Node;
typedef struct Node*    PtrToNode;
typedef PtrToNode   List;
typedef PtrToNode   Position;

List InitList();

List MakeEmpty(List L);
//空为1，非空为0
int IsEmpty(List L);

int IsLast(Position P, List L);

Position Find(int X, List L);

void Delete(int X, List L);

Position FindPrevious(int X, List L);
//从指定位置后面插入元素
void Insert(int X, List L, Position P);

void DeleteList(List L);

Position Header(List L);

Position First(List L);

Position Advance(Position P);

int Retrive(Position P);

void PrintList(List L);


#endif  /*_LINK_LIST_H*/
