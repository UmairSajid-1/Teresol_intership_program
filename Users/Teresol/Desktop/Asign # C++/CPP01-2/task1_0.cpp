/******************************************************************
*                                                                 *
*                Name: Umair Sajid                                *
*                Date: 25-07-2024                                 *
*                Description: This program find the users are     *
*                eligible to vote or not                          *
*                                                                 *
******************************************************************/
#include <iostream>
using namespace std;
int main()
{
    string Citizen;
    int age;
    cout << "Are You Citizen (Yes or No): ";
    cin >> Citizen;
    if(Citizen=="yes"||Citizen=="Yes"||Citizen=="YES")
    {
        cout << "Enter your age: ";
        cin >> age;
        if(age>=18)
        {   
            cout << "You are  eligible to vote." << endl;
        }
        else if(age<=0 && age<18)
        {
           cout << "You are not eligible to vote." << endl; 
        }
        else 
        {
          cout << "You Press Wrong Key. Please Try Again." << endl;  
        }
    }
    else if(Citizen=="NO"||Citizen=="No"||Citizen=="no")
    {
      cout << "You are not eligible to vote." << endl;
    }
    else
    {
        cout << "You Press Wrong Key. Please Try Again." << endl;
    }
}