//remove an element from array
#include<iostream>
using namespace std;
int main()
{
    int n,r,size;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n]={};
    cout<<"Enter elements into the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i<<". ";
        cin>>a[i];
    }
    cout<<"Enter the element you want to remove : ";
    cin>>r;
    size=n;
    for(int i=0;i<n;i++)
    {
        if(a[i]==r)
        {
            a[i]=a[i+1];
            size=i+1;
            for(int j=size;j<n;j++)
            {
                a[j]=a[j+1];
                if(j==n)
                    break;
                    // cout<<j<<". "<<a[j]<<endl;
            }
        }
        // cout<<i<<". "<<a[i]<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<i<<". "<<a[i]<<endl;
    }
        
    

}