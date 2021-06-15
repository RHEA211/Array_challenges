/*Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest*/
//1 BASED INDEXING
//update a2  with element of a --we are putting  i of a in a2[] 

#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t,n;
   cin>>t;
   const int N=100;
    

   while(t--)
    {int n;
    cin>>n;
   
    int a[n];
    int a2[N];

    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }


    
    for(int i=1;i<=N;i++)
    {
        a2[i]=-1;
    }

    int mini= INT_MAX;

    for(int i=1;i<=n;i++)
    {
        if (a2[a[i]] !=-1)
        {
            mini= min(mini,a2[a[i]]);
        }
        else 
        {
           a2[a[i]]=i; 
        }
    }

    //if no minimum index 
    if( mini== INT_MAX )
    {
        cout<<"-1"<<endl;
    }
    else 
    {
        cout<<mini<<endl;
    }




    }
}