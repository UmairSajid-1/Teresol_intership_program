/********************************************************************
*                                                                   *
*                Name: Umair Sajid                                  *
*                Date: 26-07-2024                                   *
*                Description:Print matrix elements in spiral order  *
*                                                                   *
********************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    const int size = 3;
    int data[size][size] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Matrix Before Spiral Order: " << endl;
    for (int row = 0; row < size; row++) 
    {
        for (int col = 0; col < size; col++) 
        {
            cout << data[row][col] << " ";
        }
        cout << endl;
    }
    
    cout << "Matrix After Spiral Order: " << endl;

    int top = 0, bottom = size - 1;
    int left = 0, right = size - 1;

    while (top <= bottom && left <= right) 
    {
        // Traverse from left to right
        for (int col = left; col <= right; col++) 
        {
            cout << data[top][col] << " ";
        }
        top++;
        // Traverse downwards
        for (int row = top; row <= bottom; row++) 
        {
            cout << data[row][right] << " ";
        }
        right--;
        // Traverse from right to left
        if (top <= bottom) 
        {
            for (int col = right; col >= left; col--) 
            {
                cout << data[bottom][col] << " ";
            }
            bottom--;
        }
        // Traverse upwards
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                cout << data[row][left] << " ";
            }
            left++;
        }
    }  
    cout << endl;
    return 0;
}