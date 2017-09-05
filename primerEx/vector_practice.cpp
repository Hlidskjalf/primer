//
//  vector_practice.cpp
//  primerEx
//
//  Created by Andrew Vroman on 1/15/17.
//  Copyright © 2017 com.andrewvroman. All rights reserved.
// Added a test comment to test source control

#include <iostream>
#include <iomanip>
#include <vector>
#include "vector_practice.hpp"

using std::vector;
using std::cout;
using std::cin;
using std::endl;


// Uses push_back to add ints to a vector, then prints out a formatted block
// of the numbers added (right justified, rows of 10)
int add_integers()
{
    vector<int> v2;
    for(int i = 0; i != 100; i++)
        v2.push_back(i);
    for(auto i : v2)
    {
            if(i % 10 == 0)
                cout << "\n";
        cout << std::setw(2) << i << " " << "\n";
    }
    return 0;
}



