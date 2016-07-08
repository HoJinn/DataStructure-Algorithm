//
//  DoublyLinkedList.h
//  DoublyLinkedList
//
//  Created by SonChangWoo on 2016. 7. 8..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * previous;
} Node;

typedef struct _DLinkdeList
{
    Node * head;
    Node * current;
    int numberOfData;
} DLinkedList;

typedef DLinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
int LPrevious(List * plist, Data * pdata);

Data LRemove(List * plist);
int LCount(List * plist);

#endif /* DoublyLinkedList_h */
