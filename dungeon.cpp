#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int sum=0,ans=0;
        sum=a+b+c;
        int k=min(a,min(b,c));
        int y=sum/9;
        if((sum%9==0 )and y<=k)
        {

            ans=1;
       }
        if(ans==1)
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
