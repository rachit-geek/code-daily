// bianary removal
// 5
// 10101011011
// 0000
// 11111
// 110
// 1100
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int u=1;
    while(t--)
    {
       string s;
       cin>>s;
       int n=s.length();
       int ok=0;
       bool check=true;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1' and s[i+1]=='1')
           {
               ok=1;
           }
           if(ok==1 and s[i]=='0' and s[i+1]=='0')
           {
               check=false;
               break;
           }

       }

       if(check)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}


//output:
// 5
// 10101011011
// YES
// 0000
// YES
// 11111
// YES
// 110
// YES
// 1100
// NO
