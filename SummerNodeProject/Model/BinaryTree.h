//
//  BinaryTree.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <stdio.h>
#include "BinaryTreeNode.cpp"

template<class Type>
class BinaryTree
{
private:
    BinaryTreeNode<Type> *root;
    int size;
    BinaryTreeNode<Type> * insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode);
public:
    BinaryTree();
    void insert(Type data);
    void inOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void preOrderTraversal(BinaryTreeNode<Type> * currentNode);
    void postOrderTraversal(BinaryTreeNode<Type> * currentNode);
    int calculateSize();
    bool remove(Type data);
    BinaryTreeNode<Type>*getRoot();
};




#endif /* BinaryTree_h */
