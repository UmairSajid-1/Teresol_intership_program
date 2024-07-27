/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 27-07-2024                                              *
*          Description:   program to demonstrate the scope and lifetime  *
*         of local, global, and static variables.                        *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/
#include <iostream>
using namespace std;

// var4 is a global variable
int var4 = 0;

void test() {
    // var is a static variable
    static int var = 0;
    // var2 is a local variable
    int var2 = 0;

    // Modify and print the variables
    var++;
    var2++;
    var4++;
    cout << "In test function: " << endl;
    cout << "static int var = " << var << endl;
    cout << "local int var2 = " << var2 << endl;
    cout << "global int var4 = " << var4 << endl;
}

int main() {
    // var3 is a local variable
    int var3 = 0;

    // Access and modify variables
    var3++;
    var4++;
    
    cout << "In main function before test(): " << endl;
    cout << "local int var3 = " << var3 << endl;
    cout << "global int var4 = " << var4 << endl;

    // Call test() function twice
    test();
    test();

    cout << "In main function after test(): " << endl;
    cout << "local int var3 = " << var3 << endl;
    cout << "global int var4 = " << var4 << endl;

    return 0;
}
