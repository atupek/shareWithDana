//
//  entry.h
//  magicSquare
//
//  Created by annietupek on 5/30/14.
//  Copyright (c) 2014 annietupek. All rights reserved.
//

#ifndef __magicSquare__entry__
#define __magicSquare__entry__

#include <iostream>

class Entry
{
public:
    Entry();
    bool getFilled();
    void setFilled(bool f);
    int getNumber();
    void setNumber(int n);
    void printNumber();
    bool filled;
    int number;
};


#endif /* defined(__magicSquare__entry__) */
