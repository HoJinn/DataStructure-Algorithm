//
//  main.c
//  BinarySearchTree
//
//  Created by SonChangWoo on 2016. 7. 18..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"

int main() {
    
    BTreeNode * bstRoot;
    BTreeNode * sNode;
    
    BSTMakeAndInit(&bstRoot);
    
    BSTInsert(&bstRoot, 9);
    BSTInsert(&bstRoot, 1);
    BSTInsert(&bstRoot, 6);
    BSTInsert(&bstRoot, 2);
    BSTInsert(&bstRoot, 3);
    BSTInsert(&bstRoot, 8);
    BSTInsert(&bstRoot, 5);
    
    BSTShowAll(bstRoot);
    printf("\n");
    sNode = BSTRemove(&bstRoot, 3);
    free(sNode);
    
    BSTShowAll(bstRoot);
    
    return 0;
}
