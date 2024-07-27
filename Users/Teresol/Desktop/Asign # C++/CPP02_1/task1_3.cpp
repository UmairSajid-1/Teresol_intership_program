/********************************************************************
*                                                                   *
*          Name: Umair Sajid                                        *
*          Date: 27-07-2024                                         *
*          Description:  This program for Display Data of a person  *
*          using Nested Structure                                   *
*                                                                   *
*********************************************************************
* I certify that I have neither given nor received unauthorized aid *
* on this Assignment.                                               *
********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Address
{
    string street;
    string city;
    int zip;
};

struct Person
{
    Address Adrs;
    string Name;
    int age;
    string Gender;
};
int main()
{
    Person Data; 
    cout << "Enter Name: ";
    getline(cin, Data.Name);
    cout << "Enter Age: ";
    cin >> Data.age;
    cout << "Enter Gander( male or female ): ";
    cin >> Data.Gender;
    cout << "Enter City: ";
    cin >> Data.Adrs.city;
    cout << "Enter Street Number: ";
    cin >> Data.Adrs.street;
    cout << "Enter Zip Code: ";
    cin >> Data.Adrs.zip;

    cout << "******************Data Display****************"<<endl;
    cout << "**********************************************"<<endl;
    cout << "         Name   : "<< Data.Name << endl;
    cout << "         Age    : "<< Data.age << endl;
    cout << "         Gender : "<< Data.Gender << endl;
    cout << "         City   : "<< Data.Adrs.city << endl;
    cout << "         Street : "<< Data.Adrs.street << endl;
    cout << "         ZipCode: "<< Data.Adrs.zip << endl;
    cout << "**********************************************"<<endl;
    return 0;
}