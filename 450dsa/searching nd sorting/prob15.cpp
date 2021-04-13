#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int p;
        int count=0,power=0;
        cin>>p;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=p)
            {
                count++;
                power+=arr[i];
            }
        }
        cout<<count<<' '<<power<<'\n';
    }
}