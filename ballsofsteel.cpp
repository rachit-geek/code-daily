#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int x,y,arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            arr[i]=x;
            brr[i]=y;
        }
        int c,z,g=0;;
        int flag;
        for(int j=0;j<n;j++)
        {
            c=arr[j];z=brr[j];
            flag=0;
 
        for(int i=0;i<n;i++)
        {
            if((abs(c-arr[i])+abs(z-brr[i]))<=k)
            {
                continue;
            }
            else
            {
                flag++;
            }
 
        }
        if(flag==0)
        {
            cout<<1<<endl;
            g++;
            break;
        }
        }
 
 
 
        if(g==0)
        {
            cout<<-1<<endl;
        }
    }
 
}
