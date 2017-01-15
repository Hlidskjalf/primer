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

// Reading and manipulating strings one char at a time.

int charReading()
{
    string line ("Text to be read.");
    for (auto c : line)
        cout << c << endl;
    return 0;
}

int punctuation_count()
{
    string s("Hello, World!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in " << s << endl;
    return 0;
}

int to_uppercase()
{
    string s("Hello, world!");
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;
    return 0;
}

// Subscript usage and value manipulation

int hex_converter()
{
    const string hex_digits ("0123456789ABCDEF");
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished:" << endl;
    string result;
    string::size_type n;
    while(cin >> n)
        if(n < hex_digits.size())
            result += hex_digits[n];
    cout << "The number in hexidecimal is: " << result << endl;
    return 0;
}








