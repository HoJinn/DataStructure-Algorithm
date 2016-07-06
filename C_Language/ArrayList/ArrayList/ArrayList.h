//
//  ArrayList.h
//  ArrayList
//
//  Created by SonChangWoo on 2016. 7. 6..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef ArrayList_h
#define ArrayList_h

#include "Point.h"

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef Point * LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numberOfData;
    int currentPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif /* ArrayList_h */
