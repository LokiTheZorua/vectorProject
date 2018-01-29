//
//  controller.cpp
//  vectorProject
//
//  Created by Jones, Alec on 1/29/18.
//  Copyright © 2018 Jones, Alec. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
using namespace std;

Controller :: Controller()
{
    
    
}



void Controller :: start()
{
    vector<int> intVector(20);
    vector<string> stringVector(5);
    
    for (int i = 0; i < 20; i++)
    {
        intVector[i] = i;
        cout << intVector[i] << " ";
    }
    cout << endl;
    
    for (int index = 0; index < 5; index++)
    {
        stringVector[index] = "fox";
        cout << stringVector[index] << " ";
    }
    cout << endl;
}
