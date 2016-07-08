//
//  CircularLinkedList.h
//  CircularLinkedList
//
//  Created by SonChangWoo on 2016. 7. 8..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef CircularLinkedList_h
#define CircularLinkedList_h

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _CLL
{
    Node * tail;
    Node * current;
    Node * before;
    int numberOfData;
} CList;

typedef CList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data); // insert tail
void LInsertFront(List * plist, Data data); // insert head

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
Data LRemove(List * plist);
int LCount(List * plist);

#endif /* CircularLinkedList_h */
