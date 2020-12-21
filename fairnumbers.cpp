#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll  n;cin>>n;
        ll  k,m;
        ll ans=0,j;
        m=n;
        while(ans!=1){
        j=m;
        ll flag=1;
        vector<ll> v;
        while(j!=0)
        {
            k=j%10;
            if(k!=0)
            {
                v.push_back(k);
            }
            j=j/10;
        }

            for(ll i=0;i<v.size();i++)
            {
                if(m%v[i]==0)
                {
                    flag=1;
                }
                else
                {
                    flag=2;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<m;
                ans=1;

                break;
            }
            else
            {
                m++;

            }
        }

        cout<<'\n';
    }
}
