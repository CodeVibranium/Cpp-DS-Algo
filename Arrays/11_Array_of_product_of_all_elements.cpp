#include <iostream>
using namespace std;
int main()
{
    cout << "Program to find the product of all elements except the current index element " << endl;
    int count = 0;
    int product = 1;
    cout << "Enter the sie of the array : ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ".Enter element : ";
        cin >> arr[i];
    }
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        while (count < size)
        {
            if (count == i)
            {
                count++;
            }
            else
            {
                product = product * arr[count];
                count++;
            }
        }
        cout << product << ",";
        count = 0;
        product = 1;
    }
    cout << "]" << endl;
    return 0;
}