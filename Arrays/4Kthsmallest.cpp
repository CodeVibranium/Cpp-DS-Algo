/*
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.*/

#include<iostream>
using namespace std;
int main()
{
    int size,Min=0,k=0,j=0;
    
    cout<<"Enter the number of elements you want to enter : ";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<i<<".Enter number : ";
        cin>>arr[i];
    }

    cout<<"Enter K : ";
    cin>>k;

    int newArr[k];

    Min=arr[0];
    

    for(int i=0;i<size;i++)
    {   
         
        if(arr[i]<Min)
        {
            
            Min=arr[i];
            newArr[j]=Min;
            j++;
        }
       
    }
 
 
    cout<<k<<" smallest element in the array is : "<<newArr[0];
     
}