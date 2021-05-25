#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int size,s,a;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element : ";
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<"Enter sum : ";
    cin>>s;
    int low=0,high=size-1;
    while(low<high)
    {
        int total=v[low]+v[high];
        if(total>s)
        {
            high--;
        }
        else if(total<s)
        {
            low++;
        }
        else if(total==s)
        {
            
            //  cout<<"[L: "<<low<<","<<high<<":H]"<<endl;
            cout<<"[ "<<v[low]<<","<<v[high]<<" ]"<<endl;
            low++;
        }
    }
}



// {   cout<<"[ "<<main<<","<<x<<" ]"<<endl;
//             k++;
//         }