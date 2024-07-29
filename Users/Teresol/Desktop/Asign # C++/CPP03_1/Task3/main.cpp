#include <iostream>
#include "math_function.h"
//#include "math_function.cpp"

using namespace std;

int main() 
{
    int num;

    // Calculate and display factorial
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    // Calculate and display Fibonacci
    cout << "Enter a number to calculate its Fibonacci: ";
    cin >> num;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;

    return 0;
}
