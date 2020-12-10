#include<bits/stdc++.h>
using namespace std;
int main()
{
 
        int a,b;
        cin>>a>>b;
        if(a<b and b-a==1)
        {
            cout<<a<<99<<' '<<b<<0<<0;
        }
        else if(a==b)
        {
            cout<<a<<1<<' '<<b<<2;
        }
        else if(a==9 and b==1)
        {
            cout<<9<<' '<<1<<0;
        }
        else
        {
            cout<<-1;
        }
 
 
}
