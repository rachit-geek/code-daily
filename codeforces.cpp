#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n,r;
    cin>>n>>r;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    n=unique(arr,arr+n)-arr;
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if((arr[i]-ans*r)>0)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
    }

}
