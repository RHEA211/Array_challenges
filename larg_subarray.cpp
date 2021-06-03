#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t,ans;
   cin>>t;

   while(t--)
    {int n;
    cin>>n;
        int a[n];

        for(int i=0;i<n;i++)

        {
            cin>>a[i];
            }

        int ans=2;
        int diff=a[1]-a[0];
        int j=2;
        int present =2;

        while(j<n)
        {
            if(a[j]-a[j-1]==diff)
            {
                present++;

            }
            else
            {
                diff=a[j]-a[j-1];
               present=2;
            }
            ans=max(ans,present);
            j++;
        }
    
    
    cout<<ans<<endl;
    }
    
    return 0;
}