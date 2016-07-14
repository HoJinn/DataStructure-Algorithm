//
//  main.c
//  BinaryTree
//
//  Created by SonChangWoo on 2016. 7. 14..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "BinaryTree.h"

void ShowInData(int data);

int main() {
    
    BTreeNode * node1 = MakeBTreeNode();
    BTreeNode * node2 = MakeBTreeNode();
    BTreeNode * node3 = MakeBTreeNode();
    BTreeNode * node4 = MakeBTreeNode();
    
    SetData(node1, 1);
    SetData(node2, 2);
    SetData(node3, 3);
    SetData(node4, 4);
    
    MakeLeftSubTree(node1, node2);
    MakeRightSubTree(node1, node3);
    MakeLeftSubTree(node2, node4);
    
    InorderTraverse(node1, ShowInData);
    
    return 0;
}

void ShowInData(int data) {
    printf("%d \n", data);
}