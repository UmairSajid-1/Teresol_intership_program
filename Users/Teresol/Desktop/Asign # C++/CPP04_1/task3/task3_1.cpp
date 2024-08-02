/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 02-08-2024                                              *
*          Description: Uses a void pointer to store and print different *
*                       types of data (int, float, char)                 *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/

#include <iostream>
using namespace std;

void printData(void* ptr, char type) {
    switch (type) {
        case 'i':
            cout << "Integer: " << *(static_cast<int*>(ptr)) << endl;
            break;
        case 'f':
            cout << "Float: " << *(static_cast<float*>(ptr)) << endl;
            break;
        case 'c':
            cout << "Character: " << *(static_cast<char*>(ptr)) << endl;
            break;
        default:
            cout << "Unknown type" << endl;
    }
}

int main() {
    int i = 42;
    float f = 3.14f;
    char c = 'A';

    void* ptr;

    // Store and print integer
    ptr = &i;
    printData(ptr, 'i');

    // Store and print float
    ptr = &f;
    printData(ptr, 'f');

    // Store and print character
    ptr = &c;
    printData(ptr, 'c');

    return 0;
}
