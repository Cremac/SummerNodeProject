//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerList.h"
#include <assert.h>

template<class Type>
SummerList<Type> :: SummerList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
    
}

template<class Type>
void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert(index >= 0 && index <= size);
    DataNode<Type> * indexPointer = front;
    
    DataNode<Type> * newNode = new DataNode<Type>(data);
    
    if(index == 0)
    {
        newNode->setNewPointer(front);
        front = newNode;
    }
    else if(index == size-1)
    {
        end->setNodePointer(newNode);
        end = newNode;
    }
    else
    {
    
        for(int position = 0; position < index-1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        
    
        //newNode->setNodePointer(indexPointer->getNodePointer());    This will do  the next two lines in one line.
        DataNode<Type> * temp = indexPointer->getNodePointer();
        newNode->setNodePointer(temp);
        
        indexPointer>setNodePointer(newNode);
    }
}