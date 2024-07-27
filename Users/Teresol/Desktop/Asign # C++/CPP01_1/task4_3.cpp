/******************************************************************
*                                                                 *
*                Name: Umair Sajid                                *
*                Date: 24-07-2024                                 *
*                Description: This program Find                   *
*                Most frequent element From an Array              *
*                                                                 *
******************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 10; // Fixed size of the array
    int array[SIZE];
    int mostFrequent;
    int maxCount = 0;

    // Get user input
    cout << "Enter " << SIZE << " elements:" << endl;
    for (int i = 0; i < SIZE; ++i) 
    {
        cin >> array[i];
    }

    // Find the most frequent element
    for (int i = 0; i < SIZE; ++i) {
        int currentCount = 0;
        for (int j = 0; j < SIZE; ++j) {
            if (array[j] == array[i]) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequent = array[i];
        }
    }

    cout << "Most frequent element is " << mostFrequent << " and it is " << maxCount << " times " << endl;

    return 0;
}