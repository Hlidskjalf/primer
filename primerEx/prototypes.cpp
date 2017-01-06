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
