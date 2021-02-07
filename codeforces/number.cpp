#include<bits/stdc++.h>
using namespace std;
// problem numbers
int main(){
int t;cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    int flag=0;

    for(int i=0;i<n;i++)
    {

        if(arr[i]<=k)
        {
            flag++;

        }
    }
    if(flag==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(arr[0]+arr[1]<=k and n>=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
}
