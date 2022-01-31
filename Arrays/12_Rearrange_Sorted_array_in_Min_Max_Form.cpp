#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the elements into the array " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int start = 0;
    int last = size - 1;
    int middle = (size - 1) / 2;
    while (last >= middle)
    {
        if (last == middle)
            cout << arr[middle];
        else
        {
            cout << arr[last] << "," << arr[start] << ",";
        }
        last--;
        start++;
    }
    cout << endl;
}