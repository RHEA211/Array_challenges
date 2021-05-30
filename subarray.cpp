//subarray coding
#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n)
{
    int i,s,e;
    for (s=0;s<n;s++)
    {
        for(e=s;e<n;e++)
        {
            cout<<"{";
            for(i=s;i<=e;i++)
            {
                cout<<arr[i];
            }
            cout<<"}";
        }
    }
}
int main()
{
     int n,arr[n];
    cin>>n;

    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"subarrays-"<<endl;
    subarray( arr,n);
}