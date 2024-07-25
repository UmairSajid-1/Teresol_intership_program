/******************************************************************
*                                                                 *
*                Name: Umair Sajid                                *
*                Date: 25-07-2024                                 *
*                Description: swap two numbers without using a    *
*                bitwise XOR operator                             *
*                                                                 *
******************************************************************/
#include <iostream>
using namespace std;
int main()
{   
    int Number1, Number2;
     cout << "Enter any integer Number       : ";
     cin >> Number1;
     cout << "Enter again any integer Number : ";
     cin >> Number2;

     cout << "Numbers Before Swap:  " << Number1 << " & " << Number2 << endl;

     Number1 = Number1 ^ Number2;
     Number2 = Number1 ^ Number2;
     Number1 = Number1 ^ Number2;

     cout << "Numbers After Swap:  " << Number1 << " & " << Number2 << endl;
     return 0;
}