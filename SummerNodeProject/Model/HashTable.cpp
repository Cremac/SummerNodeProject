//
//  HashTable.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.h"

template<class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->size = 0;
    this->efficiencyPercentage = .666;
    
    this->front = new HashNode<Type>();
    HashNode<Type> * currentEnd = front;
    //Loop to create the first array of nodes for storage.
    for (int index = 1; index < capacity; index++)
    {
        HashNode<Type> * next = new HashNode<Type>();
        currentEnd->setNode(next);
        currentEnd = next;
    }
}

template<class Type>
void HashTable<Type> :: add(Type data)
{
    if(((double)size / capacity) >= efficiencyPercentage)
    {
        resize();
    }
    
    long position = findPosition(data);
    
    HashNode<Type> * indexPointer = front;
    
    for(long index = 0; index < position; index++)
    {
        indexPointer = indexPointer->getNode();
    }
    
    indexPointer->setData(data);
    indexPointer->setStuffed(true);
}

template<class Type>
long HashTable<Type> :: findPosition(Type data)
{
    long insertedPosition;
    
    unsigned long address = &data;
    
    insertedPosition = address % capacity;
    HashTable<Type>* indexPointer = front;
    
    for (long index = 0; index <= insertedPosition; index++)
    {
        indexPointer - indexPointer->getNode();
    }
    
    if(indexPointer->isStuffed())
    {
        insertedPosition = handleCollision(data, insertedPosition);
    }
    
    return insertedPosition;
}

template<class Type>
long HashTable<Type> :: handleCollision(Type data, long currentPosition)
{
    long updatedPosition = -1;
    
    HashNode<Type> * indexPointer = front;
    
    for (long index = 1; index < currentPosition +1; index++)
    {
        indexPointer = indexPointer->getNode();
    }
    
    for (long index = currentPosition + 1; index < capacity && updatedPosition == -1; index++)
    {
        if (!indexPointer->getStuffed())
        {
            updatedPosition = index;
        }
        indexPointer = indexPointer->getNode();
    }
    if (updatedPosition == -1)
    {
        indexPointer = front;
        for (long index = 0; index < currentPosition && updatedPosition == -1; index++)
        {
            if (!indexPointer->getStuffed())
            {
                updatedPosition = index;
            }
            indexPointer = indexPointer->getNode();
        }
    }
    
    return updatedPosition;
}








