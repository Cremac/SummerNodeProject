//
//  DataNode.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef DataNode_h
#define DataNode_h

#include <stdio.h>

template <class Type>

class DataNode
{
private:
    Type nodeData;
    DataNode * nodePointer;
public:
    DataNode();
    DataNode(Type nodeData);
    void setNodeData(Type nodeData);
    Type getNodeData();
    void setNodePointer(DataNode * nodePointer);
    DataNode * getNodePointer();
    
};

#endif /* DataNode_h */
