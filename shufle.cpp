#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int n;cin>>n;string a,b;cin>>a>>b;
            int r=0,b1=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]>b[i])
                {
                    r++;
                }
                else if(a[i]==b[i])
                {
                    r++;b1++;
                }
                else
                {
                    b1++;
                }
            }

                if(r>b1)
                {
                    cout<<"RED"<<endl;
                }
                else if(r==b1)
                {
                    cout<<"EQUAL"<<endl;
                }
                else
                {
                    cout<<"BLUE"<<endl;
                }

    }
}
