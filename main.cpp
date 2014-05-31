//
//  main.cpp
//  magicSquare
//
//  Created by annietupek on 12/29/13.
//  Copyright (c) 2013 annietupek. All rights reserved.
//

#include <iostream>
#include <vector>
#include "entry.h"
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int dimension;
int magicSum = 0;
int sum = 0;
vector<vector <Entry> > square;
Entry entry;

int getSquareDimensions();
void initializeSquare(int);
void createSquare(vector<vector <Entry> > square);
void createSquareOdd(vector <vector <Entry> > square);
void createSquareDblEven(vector <vector <Entry> > square);
void createSquareEven(vector <vector <Entry> > square);
void printSquare(vector <vector <Entry> > square);
void getMagicSum(int);
void checkSquare(vector <vector <Entry> > square);
bool checkRows(vector <vector <Entry> > square);
bool checkColumns(vector <vector <Entry> > square);
bool checkDiagonals(vector <vector <Entry> > square);

int main()
{
    getSquareDimensions();
    getMagicSum(dimension);
    initializeSquare(dimension);
    createSquare(square);
    printSquare(square);
    checkSquare(square);
    
    return 0;
}

int getSquareDimensions()
{
    cout << "How many rows/columns do you want in your magic square?" << endl;
    cin >> dimension;
    return dimension;
}

void getMagicSum(int dimension)
{
    magicSum=(((dimension * dimension)+1)*dimension)/2;
    cout << magicSum << endl;
}

//create empty magic square
void initializeSquare(int dimension)
{
    for (int i=0; i< dimension; i++)
    {
        square.push_back(vector <Entry>());
    }
}

void createSquare(vector <vector <Entry> > square)
{
    if (dimension % 2 == 1) //for odd-dimension square
    {
        createSquareOdd(square);
    }
    else if (dimension % 4 == 0) //for doubly-even dimension square
    {
        createSquareDblEven(square);
    }
    else //for singly-even dimension square
    {
        createSquareEven(square);
    }
}

//for odd dimension populate square cells with numbers
//TODO populate entry cells w numbers
void createSquareOdd(vector <vector <Entry> > square)
{
   /*int i=0;
    int tempi=0;
    int j=(dimension/2)+1;
    int tempj=(dimension/2)+1;
    int k=1;
    for (k=1; k<(dimension * dimension); k++)
    {
        if(square.at(tempi).at(tempj).filled == false)
        {
            i=tempi;
            j=tempj;
            square.at(i).at(j).setNumber(k);
            square.at(i).at(j).setFilled(true);
            tempi=i-1;
            if (tempi==-1)
            {
                tempi=dimension;
            }
            tempj=j+1;
            if (tempj==dimension+1)
            {
                tempj=0;
            }
        }
        else
        {
            tempi=i+1;
            tempj=j;
        }
        
    }
    square.at(i).at(j).setNumber(k);*/
}

//TODO
void createSquareDblEven(vector <vector <Entry> > square)
{
}

//TODO
void createSquareEven(vector <vector <Entry> > square)
{
}

void printSquare(vector <vector <Entry> > square)
{
    vector <vector <Entry> >::iterator row;
    vector <Entry>::iterator column;
    for (row=square.begin(); row !=square.end(); row++)
    {
        for (int i=0; i<dimension; i++)
        {
            cout << " ";
            entry.printNumber();
            cout << "|";
        }
        cout << endl;
        for (int i=0; i<dimension; i++)
        {
            cout << "-- ";
        }
        cout << endl;
    }
}

void checkSquare(vector <vector <Entry> > square)//TODO fix else-ifs to print all unsuccessful conditions or move couts to individual tests...
{
    if (checkRows(square) && checkColumns(square) && checkDiagonals(square))
    {
        cout << "all sums successful!" << endl;
    }
    else if (!checkRows(square))
    {
        cout << "row sums unsuccessful." << endl;
    }
    else if (!checkColumns(square))
    {
        cout << "column sums unsuccessful." << endl;
    }
    else if (!checkDiagonals(square))
    {
        cout << "diagonal sums unsuccessful." << endl;
    }
}

//TODO
bool checkRows(vector <vector <Entry> > square)
{
    /*for (int i=0; i<dimension; i++)
    {
        for (int j=0; j<dimension; j++)
        {
            sum+=square.at(i).at(j).getNumber();
        }
    }
    cout << sum << endl;
    if (sum == magicSum)
    {
        return true;
    }
    else
    {*/
        return false;
    //}
}

//TODO
bool checkColumns(vector <vector <Entry> > square)
{
    return false;
}

//TODO
bool checkDiagonals(vector <vector <Entry> > square)
{
    return false;
}
