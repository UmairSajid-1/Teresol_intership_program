/******************************************************************
*                                                                 *
*                Name: Umair Sajid                                *
*                Date: 25-07-2024                                 *
*                Description: Array of integers that have at      *
*                least two significant elements.                  *
*                                                                 *
******************************************************************/
#include <iostream>
using namespace std;

int main() {
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Elements with at least two significant digits are: ";
    bool firstElement = true;

    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int count = 0;

        // Handle the special case for zero separately if needed
        if (num == 0) {
            count = 1;
        } else {
            // Count the digits
            while (num != 0) {
                num /= 10;
                count++;
            }
        }

        // Check if the number has at least two significant digits
        if (count >= 2) {
            if (!firstElement) {
                cout << ", ";
            }
            cout << arr[i];
            firstElement = false;
        }
    }
    cout << endl;

    return 0;
}