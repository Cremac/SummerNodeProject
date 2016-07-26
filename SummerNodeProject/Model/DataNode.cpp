//
//  DataNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "DataNode.h"

//Constructors

template <class Type>
DataNode<Type> ::DataNode()
{
    this->nodePointer = nullptr;
    
    
}
template <class Type>
DataNode<Type> :: DataNode(Type nadeData)
{
    this->nodeData = nodeData;
    this->nodePnter = nullptr;
}


//End Constructors

//Getters and Setters
template <class Type>
Type DataNode<Type>:: getNodeData()
{
    return nodeData;
}

template <class Type>
DataNode<Type> * DataNode<Type> :: getNodePointer()
{
    return nodePointer;
}

template <class Type>
void DataNode<Type> :: setNodeData(Type nodeData)
{
    this->nodeData = nodeData;
}

template <class Type>
void DataNode<Type> :: setNodePointer(DataNode<Type>* nodePointer)
{
    this->nodePointer = nodePointer;
}

//End Getters/Setters

