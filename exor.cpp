#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;int arr[n];int i,j,k,s,p,q,l;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        int z=0;
        for(l=x;l>0 && i<n-1;l--)
        { 
            while(arr[i]<=0)
            {
                i++;
            }
            int flag=0;
            k=arr[i];
            p=(int)log2(k);
            q=(int)pow(2,p);
            arr[i]=arr[i]^q;
            for(j=i+1;j<n;j++)
            {
                if((arr[j]^q)<arr[j])
                {
                    arr[j]=arr[j]^q;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                arr[n-1]=arr[n-1]^q;
            }
            z++;
        }
        if((x-z)>0 && (x-z)%2==0 && n<3)
        {
            arr[n-1]=arr[n-1]^1;
            arr[n-2]=arr[n-2]^1;
        }

        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    }
}
