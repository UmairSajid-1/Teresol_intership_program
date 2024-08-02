/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 02-08-2024                                              *
*          Description: Takes an integer input from the user, converts   *
*                       it to a float, and prints the result             *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int integerInput;
    
    // Ask the user for an integer input
    cout << "Enter an integer: ";
    cin >> integerInput;
    
    // Typecast the integer to a float
    float floatResult = static_cast<float>(integerInput);
    
    // Print the result
    cout << "The integer " << integerInput << " converted to float is " << floatResult << endl;

    return 0;
}
