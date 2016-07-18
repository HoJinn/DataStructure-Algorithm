//
//  BinarySearchTree.h
//  BinarySearchTree
//
//  Created by SonChangWoo on 2016. 7. 18..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "BinaryTree.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode ** pRoot);

BSTData BSTGetNodeData(BTreeNode * bst);

void BSTInsert(BTreeNode ** pRoot, BSTData data);

BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);

BTreeNode * BSTRemove(BTreeNode ** pRoot, BSTData target);

void BSTShowAll(BTreeNode * bst);

#endif /* BinarySearchTree_h */
