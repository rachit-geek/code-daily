#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;while(t--)
    {
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        long long int k=n*a;
        if(s%n<=b and k+b>=s)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
 
        cout<<'\n';
    }
}
