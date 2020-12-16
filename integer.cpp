#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    long long int n;cin>>n;long long int p[n];
    long long int i,m;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cin>>m;
    long long int q[m];
    long long int a=0,b=0,c=0,d=0;
    for(i=0;i<m;i++)
    {
        cin>>q[i];
    }
    for(i=0;i<n;i++)
    {
        if(p[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    for(i=0;i<m;i++)
    {
        if(q[i]%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    cout<<a*c+(b*d)<<endl;

    }



}
