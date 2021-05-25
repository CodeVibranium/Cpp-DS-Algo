#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int l=0;
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<i+1<<". Enter the value : ";
        cin>>arr[i];
    }
    int h=size-1;
    while(l<=h)
    {
        int x=arr[l];
        if(x<0)
        {
            l++;
        }
        if(x>0)
        {
            swap(arr[l],arr[h]);
            l++;
            h--;
        }

    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}