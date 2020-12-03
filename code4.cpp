#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int k=(a/c);
    if(a%c!=0)
    {
        k=k+1;
    }
    int f=(b/d);
    if(b%d!=0)
    {
        f=f+1;
    }
    if(k+f>e)
    {
        cout<<-1;
    }
    else
    {
        cout<<k<<' '<<f;
    }
    cout<<'\n';
 
    }
 
 
