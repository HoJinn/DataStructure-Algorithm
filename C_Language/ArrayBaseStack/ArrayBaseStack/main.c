//
//  main.c
//  ArrayBaseStack
//
//  Created by SonChangWoo on 2016. 7. 11..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "ArrayBaseStack.h"

int main() {
    // init
    Stack stack;
    StackInit(&stack);
    
    // save data
    SPush(&stack, 1);
    SPush(&stack, 2);
    SPush(&stack, 3);
    SPush(&stack, 4);
    SPush(&stack, 5);
    
    // pop data
    while (!SIsEmpty(&stack)) {
        printf("%d ", SPop(&stack));
    }
    
    return 0;
}
