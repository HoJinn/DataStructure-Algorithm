//
//  ArrayBaseStack.h
//  ArrayBaseStack
//
//  Created by SonChangWoo on 2016. 7. 11..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef ArrayBaseStack_h
#define ArrayBaseStack_h

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arraystack
{
    Data stackArray[STACK_LEN];
    int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
Data SPeek(Stack * pstack);

#endif /* ArrayBaseStack_h */
