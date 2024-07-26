/********************************************************************
*                                                                   *
*                Name: Umair Sajid                                  *
*                Date: 26-07-2024                                   *
*                Description:Print matrix elements in spiral order  *
*                                                                   *
*********************************************************************
* I certify that I have neither given nor received unauthorized aid *
* on this Assignment.                                               *
********************************************************************/ 
#include <iostream>
using namespace std;

int main() 
{
    int rows = 0, cols = 0;

    // Input matrix dimensions
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print the matrix before spiral order
    cout << "Matrix Before Spiral Order:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Spiral order traversal
    cout << "Matrix After Spiral Order:" << endl;
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int col = left; col <= right; col++) {
            cout << matrix[top][col] << " ";
        }
        top++;

        // Traverse downwards
        for (int row = top; row <= bottom; row++) {
            cout << matrix[row][right] << " ";
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }

        // Traverse upwards
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                cout << matrix[row][left] << " ";
            }
            left++;
        }
    }

    cout << endl;

    return 0;
}
