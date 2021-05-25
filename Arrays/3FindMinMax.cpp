#include<iostream>
using namespace std;
int main()
{
    //Program to find min and max element in an array
    int size,Max=0,Min=0;
    
    cout<<"Enter the number of elemnts you want to enter : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<i+1<<". Enter the element : ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    { 
       if(i==0)
       {
           Max=arr[i];
           Min=arr[i];
       }
       else if(i>0)
       {
           if(arr[i]>Max)
           {
               Max=arr[i];
           }
           else if(arr[i]<Min)
           {
               Min=arr[i];
           }
       }

    }

 
    cout<<"Max element in the array is : "<<Max<<endl;
    cout<<"Min element in the array is : "<<Min<<endl;

}