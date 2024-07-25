/******************************************************************
*                                                                 *
*                Name: Umair Sajid                                *
*                Date: 25-07-2024                                 *
*                Description: This program Find Average of an     *
*                Array                                            *
*                                                                 *
******************************************************************/
#include<iostream>
using namespace std;
int main()
{
  float array[50], Add=0, Average=0;
  int Number;
  cout << "Enter total number of elements(1 to 50): ";
  cin >> Number;
  cout << endl;

  for(int i = 0; i < Number; ++i) 
  {
    cout << "Enter Number for index" << i + 1 << " : ";
    cin >> array[i];
    Add = Add + array[i];
  }

   Average = Add/Number;
   cout << "Average is " <<  Average << endl;
}