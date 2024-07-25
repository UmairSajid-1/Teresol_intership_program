#include <iostream>
using namespace std;
int main()
{
    int Number, i;
    cout << "Enter Any Number For Table: ";
    cin >> Number;
    for(i=1;i<=10;i++)
    {
       cout << Number << " X " << i << " = " <<  Number * i << endl;
    } 
    return 0;
}