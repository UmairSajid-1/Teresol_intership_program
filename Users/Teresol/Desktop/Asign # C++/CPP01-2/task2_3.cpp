/********************************************************************
*                                                                   *
*                Name: Umair Sajid                                  *
*                Date: 27-07-2024                                   *
*                Description: Square matrix, the task is to rotate  *
*                its elements clockwise by one step                 *
*                                                                   *
*********************************************************************
* I certify that I have neither given nor received unauthorized aid *
* on this Assignment.                                               *
********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the matrix: ";
    cin >> size;

    int matrix[size][size];

    cout << "Enter the elements of the " << size << "x" << size << " matrix:" << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "Element [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }

    cout << "Matrix Before Rotation: " << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // Perform the rotation
    int top = 0, bottom = size - 1;
    int left = 0, right = size - 1;
    int prev = matrix[top][left];

    // Move elements of the top row one step right
    for (int i = left; i < right; ++i) {
        swap(prev, matrix[top][i + 1]);
    }

    // Move elements of the right column one step down
    for (int i = top; i < bottom; ++i) {
        swap(prev, matrix[i + 1][right]);
    }

    // Move elements of the bottom row one step left
    for (int i = right; i > left; --i) {
        swap(prev, matrix[bottom][i - 1]);
    }

    // Move elements of the left column one step up
    for (int i = bottom; i > top; --i) {
        swap(prev, matrix[i - 1][left]);
    }

    matrix[top + 1][left] = prev;

    cout << "Matrix After Rotation: " << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
