#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--)
    {
        int n,m;cin>>n>>m;
        int arr[n],brr[m];int i,j;
        for( i=0;i<n;i++)
        {
            cin>>arr[i];
        }
 
        for(i=0;i<m;i++)
        {
            cin>>brr[i];
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i]==brr[j])
                {
                    ans++;
                }
            }
        }
 
        cout<<ans<<endl;
    }
 
 
}
