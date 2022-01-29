#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << "***** Program to find numbers which add upto given value *****" << endl;
    cout << "Enter the size of the array : ";
    int arrSize;
    cin >> arrSize;
    int arr[arrSize];
    cout << "Add elements into the array" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << i + 1 << ".Enter element : ";
        cin >> arr[i];
    }
    cout << "Provide a value : ";
    int value;
    cin >> value;
    int a, b;
    cout << "[";
    for (int i = 0; i < arrSize; i++)
    {

        a = i;
        b = a + 1;
        // cout << "Value of a" << a << endl;
        // cout << "Value of b" << b << endl;
        // cout << "Value of array Size" << arrSize << endl;
        while (b <= arrSize)
        {
            if (arr[a] + arr[b] == value)
            {
                cout << "(" << arr[a] << "," << arr[b] << ")";
                break;
            }
            else if (arr[a] + arr[b] > value)
                break;
            else
                b++;
        }
    }
    cout << "]" << endl;
}