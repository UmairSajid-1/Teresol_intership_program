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
