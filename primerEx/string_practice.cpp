//
//  string_practice.cpp
//  primerEx
//
//  Created by Andrew Vroman on 1/13/17.
//  Copyright © 2017 com.andrewvroman. All rights reserved.
//

#include <iostream>
#include "string_practice.hpp"
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int readString()
{
    string line;
    cout << "Enter a string: ";
    while(getline(cin, line))
        cout << line << endl;
    return 0;
}

int readNonempty()
{
    string line;
    cout << "Enter a non-empty string: ";
    while(getline(cin, line))
        if (!line.empty())
            cout << line << endl;
    return 0;
}

int terminateIfEmpty()
{
    string line;
    cout << "Enter a string: ";
    while(getline(cin, line))
        if (line.empty())
            return 0;
        else if (!line.empty())
            cout << line << endl;
    return 0;
            
}