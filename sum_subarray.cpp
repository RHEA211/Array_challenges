//subarray coding
#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n)
{
    int i,s,e;
    
        int sum=0;
    for (s=0;s<n;s++)
    { sum=0;
        for(e=s;e<n;e++)
        {
           sum=sum+arr[e];
           cout<<sum<<" ";
        }
    }
   
}
int main()
{
     int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"subarrays-"<<endl;
    subarray( arr,n);
}