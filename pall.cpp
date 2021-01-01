#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        int ans=0;
        for(int i=1;i<l;i++)
        {
            if(s[i]==s[i-1])
            {
                ans++;
                s[i]='*';
            }
            else
            {
                if(i>1)
                {
                    if(s[i]==s[i-2])
                    {
                        s[i]='*';
                        ans++;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
}
