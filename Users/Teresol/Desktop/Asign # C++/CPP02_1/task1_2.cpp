/********************************************************************
*                                                                   *
*          Name: Umair Sajid                                        *
*          Date: 27-07-2024                                         *
*          Description:  This program for finding the size of       *
*          Structure                                                *
*                                                                   *
*********************************************************************
* I certify that I have neither given nor received unauthorized aid *
* on this Assignment.                                               *
********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Structure_1
{
    int a;
    int b;
    int c;
};

struct Structure_2
{
    int a;
    int b;
    int c;
    char d;
};

struct Structure_3
{
    float a;
    int b;
    int c;
    char d;
};


int main()
{
    Structure_1 size_1;
    Structure_2 size_2;
    Structure_3 size_3;
    cout << "Size of Structure_1: " << sizeof(Structure_1) << endl;
    cout << "Size of Structure_2: " << sizeof(Structure_2) << endl;
    cout << "Size of Structure_3: " << sizeof(Structure_3) << endl;

    return 0;
}