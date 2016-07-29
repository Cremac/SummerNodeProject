//
//  HashTable.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include "HashNode.cpp"
template <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficiencyPercentage;
    HashNode<Type>* front;
    
    bool isPrime(int sameNumber);
    void resize();
    long nextPrime(long current);
    long findPosition(Type data);
    long handleCollision(Type data);
    
public:
    HashTable();
    void add(Type data);
    bool remove(Type data);
};


#endif /* HashTable_h */
