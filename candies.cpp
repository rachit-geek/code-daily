#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int sum=0;
        sum+=a+b+c;
        sum=floor(sum/2);
        cout<<sum<<endl;
    }
}
