#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;int j=k;
        string s;
        for(int i=0;i<n;i++)
        {
            if(k>0)
            {
                s+="a";
                k-=1;
            }
            else
            {
                if (k==0)
                    {
                         s+="b";
                         k-=1;
                    }
                else if(k==-1)
                {
                    s+="c";
                    k=j;
                }

            }
        }

        cout<<s<<endl;
    }

}
