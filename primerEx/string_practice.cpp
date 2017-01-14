//
//  string_practice.cpp
//  primerEx
//
//  Created by Andrew Vroman on 1/13/17.
//  Copyright © 2017 com.andrewvroman. All rights reserved.
//

#include <string>
#include <iostream>
#include "string_practice.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

/* 
 * Three functions to gather full lines from the console. One reads
 * and repeats every newline char, one only repeats if there is 
 * something on the line being read, and the third terminates if 
 * there is nothing on the input stream.
 */

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