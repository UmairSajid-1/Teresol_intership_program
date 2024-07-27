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
void test()
{
// var is a static variable
static int var = 0;
cout << "static variable var               : " << var << endl;
var++;
// var2 is a local variable
int var2 = 0;
cout << "local variable var2 in Function   : " << var2 << endl;
var2++;
}
int main()
{
// var3 is a local variable
int var3 = 0;


cout << endl << "***********Origional value**********" << endl;
test();
cout << "local variable var3 in main    : " << var3 << endl ;
cout << "global variable var4           : " << var4 << endl;
var3++;
var4++;



cout << endl << "***********After Add 1 in all**********" << endl;
test();
cout << "local variable var3 in main    : " << var3 << endl ;
cout << "global variable var4           : " << var4 << endl;
var3++;
var4++;


cout << endl << "**********After again Add 1 in all***********" << endl;
test();
cout << "local variable var3 in main    : " << var3 << endl;
cout << "global variable var4           : " << var4 << endl;


return 0;
}