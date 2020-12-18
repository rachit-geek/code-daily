#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int arr[n];
        long long int sum=0;long long int ans[n];
        long long int sum1=0,sum2=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                sum1+=arr[i];
            }
            else
            {
                sum2+=arr[i];
            }
            sum+=arr[i];
        }

        if(sum1>sum2)
        {
            for(long long int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ans[i]=arr[i];
            }
            else
            {
                ans[i]=1;
            }
        }

        }
        else
        {
            for(long long int i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                ans[i]=arr[i];
            }
            else
            {
                ans[i]=1;
            }
        }
        }
        for(long long int i=0;i<n;i++)
        {
            cout<<ans[i]<<' ';
        }



        cout<<'\n';
    }
}
