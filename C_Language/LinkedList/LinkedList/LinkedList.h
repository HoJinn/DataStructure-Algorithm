//
//  LinkedList.h
//  LinkedList
//
//  Created by SonChangWoo on 2016. 7. 7..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _nod
{
    LData data;
    struct _node * next;
} Node;

typedef struct _linkedList
{
    Node * head;
    Node * current;
    Node * before;
    int numberOfData;
    int (*comp)(LData data1, LData data2);
} LinkedList;

typedef LinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

void SetSortRule(List * plist, int (*comp)(LData data1, LData data2));

#endif /* LinkedList_h */
