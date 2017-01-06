//
//  prototypes.cpp
//  primerEx
//
//  Created by Andrew Vroman on 1/6/17.
//  Copyright © 2017 com.andrewvroman. All rights reserved.
//

#include "prototypes.hpp"

int printTest()
{
    int x, y;
    
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "X + y = " << x + y << std::endl;
    
    return 0;
}

int counter()
{
    int currVal = 0, val = 0;
    // read the first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1;  // store the count for the current value we are processing
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurrs " << cnt << " times." << std::endl;
                currVal = val;  // to remember the new value
                cnt = 1;  // reset the counter
            }
        }
        
        std::cout << currVal << " occurs " << cnt << " times." << std::endl;
    }
    
    return 0;
}
