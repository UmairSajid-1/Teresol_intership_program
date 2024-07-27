/********************************************************************
*                                                                   *
*                Name: Umair Sajid                                  *
*                Date: 27-07-2024                                   *
*                Description:  This program Print Student Data using*
*                Structure                                          *
*                                                                   *
*********************************************************************
* I certify that I have neither given nor received unauthorized aid *
* on this Assignment.                                               *
********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string Student_name;
    float Student_age;
    char Student_grade;
};

int main()
{
    Student Show_data;
    cout << " Enter the Name of the student (Must be in Alphabetic Characters): ";
    getline(cin, Show_data.Student_name);

    cout << " Enter the Age of the student (in Numbers): ";
    cin >> Show_data.Student_age;

    cout << " Enter the Grade of the student (One Alphabatic Character): ";
    cin >> Show_data.Student_grade;

    cout << " **********************************" << endl;
    cout << " ***********Student Data***********" << endl;
    cout << " *  Student Name: " << Show_data.Student_name << setw(8) << "*" << endl;
    cout << " *  Student Age: " << Show_data.Student_age << setw(16) << "*" << endl;
    cout << " *  Student Grade: " << Show_data.Student_grade << setw(15) << "*" << endl;
    cout << " **********************************" << endl;
    return 0;
}