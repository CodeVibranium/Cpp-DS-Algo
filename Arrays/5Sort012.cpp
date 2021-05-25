#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int l=0,m=0;
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<i+1<<".Enter the value : ";
        cin>>arr[i];
    }
    int h=size-1;
    while(m<=h)
    {
        int x=arr[m];
        if(x==0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(x==1)
                m++;
        else if(x==2)
        {
            swap(arr[m],arr[h]);
            // m++;
            h--;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}