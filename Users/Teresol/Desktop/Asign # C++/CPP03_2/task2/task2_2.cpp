/*************************************************************************
*                                                                        *
*          Name: Umair Sajid                                             *
*          Date: 29-07-2024                                              *
*          Description: Program to find the sum of all elements in an    *
*          array using recursion.                                        *
*                                                                        *
**************************************************************************
*   I certify that I have neither given nor received unauthorized aid    *
*   on this Assignment.                                                  *
*************************************************************************/
#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    for(int i=0 ; i<=n ; i++)
    {
         return arr[n-1] + sumArray(arr,n-1) ;
    }
   
}

int main() 
{
    int Number;
    cout << "Enter size of array: ";
    cin >> Number;
    int arrSum[Number];

    cout << "Enter array elements: ";
    for(int i=0 ; i<=Number-1 ; i++)
    {
        cin >> arrSum[i];
    }


    cout << "Array: ";
    for(int i=0 ; i<=Number-1 ; i++)
    {
        cout << arrSum[i] << " ";
    }
    cout << endl;


    int result = sumArray(arrSum , Number);
    cout << "Sum of Array Elements: " << result;

    return 0;
}