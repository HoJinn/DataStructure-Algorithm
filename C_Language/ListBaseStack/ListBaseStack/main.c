//
//  main.c
//  ListBaseStack
//
//  Created by SonChangWoo on 2016. 7. 11..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "ListBaseStack.h"

int main() {
    // Init
    Stack stack;
    StackInit(&stack);
    
    // Save data
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