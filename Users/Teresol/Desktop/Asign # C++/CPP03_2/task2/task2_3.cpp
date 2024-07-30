/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 30-07-2024                                              *
*          Description: Program to find the spower of a number           *
*           using recursion.                                             *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/
#include <iostream>
using namespace std;

 int power(int base, int exp)
{  
    if(exp==0)
    {
        return 1;
    }
    return base * power( base , exp-1);
}

int main() 
{
    int baseNumber, expNumber;
    cout << "Enter Base Number: ";
    cin >> baseNumber;

    cout << "Enter Exp Number : ";
    cin >> expNumber;

    int Result = power(baseNumber, expNumber);

    cout << "Power of Number " << baseNumber << "^" << expNumber << " is: "  << Result << endl;
    return 0;
}