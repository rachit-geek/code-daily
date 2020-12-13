#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int i,k,t,d;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        t=k%14;
        d=floor(k/14);
 
        if((t>=1 and t<=6) and d>=1)
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
