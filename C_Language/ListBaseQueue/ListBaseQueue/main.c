//
//  main.c
//  ListBaseQueue
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "ListBaseQueue.h"

int main() {
    Queue queue;
    QueueInit(&queue);
    
    Enqueue(&queue, 1);
    Enqueue(&queue, 2);
    Enqueue(&queue, 3);
    Enqueue(&queue, 4);
    Enqueue(&queue, 5);
    
    while (!QIsEmpty(&queue)) {
        printf("%d ", Dequeue(&queue));
    }
    
    return 0;
}
