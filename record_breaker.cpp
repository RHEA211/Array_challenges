
//The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
// Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.

//Note that the very first day could be a record breaking day! 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,count;
    cin>>t;
    for (int j=1;j<=t;j++)
    {
        cin>>n;
        
        int a[n];
        a[n]=-1;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int m=a[0];
        count=0;

    if(a[0]>a[1])
        {
            count++;
        }  
    for(int i=0;i<n;i++)
    { 
        
        if(a[i]>m && a[i]>a[i+1] )
        {
            m=max(m,a[i]);
            count++;
        }

    }

   
    cout<<"Case #"<<j<<":"<<" "<<count<<endl;

    }
}