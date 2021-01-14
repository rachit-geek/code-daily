#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,a;
        cin>>s>>a;
        int k=s.length();
        int l=a.length();
        int gc=__gcd(k,l);
        int lc=(k*l)/gc;
        string s1="",s2="";
        for(int i=1;i<=(lc/k);i++)
        {
            s1+=s;
        }
        for(int i=1;i<=(lc/l);i++)
        {
            s2+=a;
        }
        if(s1==s2)
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
