#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    vector<int> peaks;
    vector<int> Mb;
    vector<int> Mf;
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
    int p=1;
    for(int i=1;i<=size-2;i++)
    {
        if(arr[p]> arr[p-1] && arr[p]> arr[p+1])
        {
            peaks.push_back(arr[p]);
            int peak=p;
            int q=p-1;
            int mb=0,mf=0;
            while(arr[peak]>arr[q])
            {
                
                peak=q;
                q--;
                mb++;
                if(q==0){break;}
            }
            Mb.push_back(mb);
            peak=p;
            q=p+1;
            while(arr[peak]>arr[q])
            {
                peak=q;
                q++;
                mf++;
            }
            Mf.push_back(mf);

        }
        p++;
    }
    for(int i=0;i<peaks.size();i++)
    {
        int length=Mb[i]+Mf[i]+1;
        int peak=peaks[i];
        cout<<i+1<<". Peak is : "<<peak<<" and its length is : "<<length<<endl;
    }
}