//An arithmetic array is an array that contains at least two integers and the differences between consecutive 
//integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays,
// while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i, t,ans;
   cin>>t;

 for (i=0;i<t;i++)
    {int n;
    cin>>n;
        int a[n];

        for(int i=0;i<n;i++)

        {
            cin>>a[i];
            }
    bool flag=0;
        int ans=2;
        int diff=a[1]-a[0];
        int j=2;//a[1]-a[0] already computed
        int present =2;//diff atleast 2 element

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
        

        
    
    
    cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    
    return 0;
}