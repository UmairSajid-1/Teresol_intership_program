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

// Function to find GCD of two numbers using recursion
int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

// Function to find LCM of two numbers using recursion
int LCM(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;  // LCM of 0 with any number is 0
    }
    int gcd = GCD(a, b);
    return (abs(a * b) / gcd);
}

int main() {
    int a, b;
    cout << "Enter 1st Number to take LCM: ";
    cin >> a;

    cout << "Enter 2nd Number to take LCM: ";
    cin >> b;

    int lcm = LCM(a, b);
    cout << "The LCM of " << a << " and " << b << " is " << lcm << endl;

    return 0;
}
