//
//  entry.cpp
//  magicSquare
//
//  Created by annietupek on 5/30/14.
//  Copyright (c) 2014 annietupek. All rights reserved.
//

#include "entry.h"
#include <iostream>
using std::cout;

Entry::Entry()
{
    filled = false;
    number = 0;
}

bool Entry::getFilled()
{
    return filled;
}

void Entry::setFilled(bool f)
{
    filled = f;
}

int Entry::getNumber()
{
    return number;
}

void Entry::setNumber(int n)
{
    number = n;
}

void Entry::printNumber()
{
    cout << number;
}
