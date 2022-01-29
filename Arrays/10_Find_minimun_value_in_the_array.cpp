#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int value;
    cout << "Enter the size of the array : ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements into the array : ";
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "Enter element : ";
        cin >> arr[i];
    }
    sort(arr, arr + size - 1);
    cout << "Minumin value in the array : " << arr[0] << endl;
}