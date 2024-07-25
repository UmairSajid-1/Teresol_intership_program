/******************************************************************
*                                                                 *
*                Name: Umair Sajid                                *
*                Date: 24-07-2024                                 *
*                Description: This program prints the size        *
*                (in bytes) of different fundamental data types   *
*                                                                 *
******************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float Radius, Area, Circumference;
    float pi = 3.1416;
    cout << "Enter the Radius of the Circle: ";
    cin >> Radius;
    Area = pi * Radius * Radius;
    cout << "Area of Circle is : " << Area << endl;
    Circumference = 2 * pi * Radius;
    cout << "Circumference of Circle is : " << Circumference << endl;
    return 0;
}
