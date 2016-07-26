//
//  main.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include "Controller/NodeController.h"

int main() {
    // insert code here...
    std::cout<<"Starting the Controller"<<std::endl;
    NodeController * app = new NodeController();
    app->start();
    std::cout<<"Ending the Controller"<<std::endl;

    return 0;
}
