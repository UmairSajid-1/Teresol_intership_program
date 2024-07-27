/********************************************************************
*                                                                   *
*          Name: Umair Sajid                                        *
*          Date: 27-07-2024                                         *
*          Description:  Program that takes an integer input (1-3)  *
*          and prints a message based on the input using a switch   *
*                                                                   *
*********************************************************************
* I certify that I have neither given nor received unauthorized aid *
* on this Assignment.                                               *
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int Number;
    cout << "Enter Number ( 1 / 2 / 3 ): ";
    cin >> Number;

    switch(Number)
    {
    case 1:
        cout << "\"You selected option 1.\"" << endl;
        break;
    case 2:
        cout << "\"You selected option 2.\"" << endl;
        break;
    case 3:
        cout << "\"You selected option 3.\"" << endl;
        break;
    default:
        cout << "\"No special Case.\"" << endl;
    } 
    return 0;
}