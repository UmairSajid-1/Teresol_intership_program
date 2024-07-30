/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 29-07-2024                                              *
*          Description: Program  to calculate the factorial of a number  *
*          using ecursive function                                       *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/
#include <iostream>
using namespace std;

int factorial(int number)
{
    if(number==1 || number==0)
    {
        return 1;
    }
    return number * factorial(number - 1);
}

int main() 
{
    int Number;
    cout << "Enter num: ";
    cin >> Number;

    int Result = factorial(Number);

      cout << "Factorial of " << Number << " is: " << Result;

    return 0;
}
