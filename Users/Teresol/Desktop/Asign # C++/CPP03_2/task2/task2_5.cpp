/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 30-07-2024                                              *
*          Description: Recursive function to find the Lowest common     *
*          multiple (LCM) of two numbers                                 *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/
#include <iostream>
using namespace std;

int  Fibonacci(int number) 
{
    if (number<=1) 
    {
        return number;  
    }

    return Fibonacci(number-1) +  Fibonacci(number-2);
}

int main() 
{
    int Number;
    cout << "Enter  nth Number to find the Fibonacci number: ";
    cin >> Number;

    int Result = Fibonacci(Number);

    cout << "Nth Number of Fibonacci is: " << Result << endl;

    return 0;
}
