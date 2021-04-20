#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,m;
    cin>>s>>n>>m;
    if((6*n<7*n and s>6) or (m>n))
    {
        cout<<"NO"<<end;
    }
    else
    {
        int days=(s*m)/n;
        if((s*m)%n!=0)
        {
            days++;
        }

        cout<<"YES"<<days<<endl;
    }

}