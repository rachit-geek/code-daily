//domino.cpp
// codeforces.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while(t--)
    {
       int n,k1,k2;
       cin>>n>>k1>>k2;
       int w,b;
       cin>>w>>b;
       int white=k1+k2;
       int black=2*n-white;
       if(2*w<=white and 2*b<=black)
       {cout<<"YES"<<endl;
       }
       else
       {cout<<"NO"<<endl;}
    }
}

