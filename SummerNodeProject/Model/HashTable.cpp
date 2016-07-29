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