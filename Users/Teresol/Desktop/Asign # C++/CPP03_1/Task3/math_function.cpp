// math_functions.cpp
#include "math_function.h"

int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1; // Base case
    } else 
    {
        return n * factorial(n - 1); // Recursive case
    }
}


int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n; // Base case
    } else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}
