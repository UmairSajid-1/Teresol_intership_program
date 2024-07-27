/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 27-07-2024                                              *
*          Description:  Program that takes a character input ('a'-'c')  *
*          and prints a message based on the input using a switch        *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char Alphabate;
    cout << "Enter Alphabate (a / b / c): ";
    cin >> Alphabate;

    switch(Alphabate)
    {
    case 'a':
        cout << "\"You selected character a.\"" << endl;
        break;
    case 'b':
        cout << "\"You selected character b.\"" << endl;
        break;
    case 'c':
        cout << "\"You selected character c.\"" << endl;
        break;
    default:
        cout << "\"No special Case.\"" << endl;
    } 
    return 0;
}