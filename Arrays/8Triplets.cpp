#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int a;
        cout<<i+1<<".) Enter element : ";
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int target;
    cout<<"Enter the sum : ";
    cin>>target;
    int l=0,m=1,h=size-1;
    while(l<h)
    {
        int total=arr[l]+arr[m]+arr[h];
        if(total==target)
        {
            cout<<"[ "<<arr[l]<<","<<arr[m]<<","<<arr[h]<<" ==> "<<target<<" ]"<<endl;
            l++;
            m++;
            h--;
        }
        else if(total<target)
        {
            m++;
        }
        else if(total>target)
        {
            h--;
        }
    }
}