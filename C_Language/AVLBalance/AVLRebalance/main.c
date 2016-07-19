//
//  main.c
//  AVLRebalance
//
//  Created by SonChangWoo on 2016. 7. 20..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "BinaryTree.h"
#include "BinarySearchTree.h"

int main() {
    BTreeNode * avlRoot;
    BTreeNode * clNode;
    BTreeNode * crNode;
    
    BSTMakeAndInit(&avlRoot);
    
    BSTInsert(&avlRoot, 1);
    BSTInsert(&avlRoot, 2);
    BSTInsert(&avlRoot, 3);
    BSTInsert(&avlRoot, 4);
    BSTInsert(&avlRoot, 5);
    BSTInsert(&avlRoot, 6);
    BSTInsert(&avlRoot, 7);
    BSTInsert(&avlRoot, 8);
    
    printf("Root node : %d\n", GetData(avlRoot));
    
    clNode = GetLeftSubTree(avlRoot);
    crNode = GetRightSubTree(avlRoot);
    
    printf("left1 : %d, right1: %d\n", GetData(clNode), GetData(crNode));
    
    clNode = GetLeftSubTree(clNode);
    crNode = GetRightSubTree(crNode);
    
    printf("left2 : %d, right2: %d\n", GetData(clNode), GetData(crNode));
    clNode = GetLeftSubTree(clNode);
    crNode = GetRightSubTree(crNode);
    
    printf("left3 : %d, right3: %d\n", GetData(clNode), GetData(crNode));
    clNode = GetLeftSubTree(clNode);
    crNode = GetRightSubTree(crNode);
    
    printf("left4 : %d, right4: %d\n", GetData(clNode), GetData(crNode));
    
    return 0;
}