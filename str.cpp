#include<bits/stdc++.h>
#define ll long long
#define heap priority_queue
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;string str;
        cin>>str; int k=0;
        for(int i=n-1;i>=0;)
        {
            if(str[i]==')')
            {
                k++;
                i--;
            }
            else
            {
                i=-1;
            }
        }

        if(k>(n-k))
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
