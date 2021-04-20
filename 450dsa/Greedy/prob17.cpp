#include<bits/stdc++.h>
using namespace std;
int minsum(int arr[],int n)
{
    int halfsum=0;
    for(int i=0;i<n;i++)
    {
        halfsum+=arr[i];
    }
    halfsum=halfsum/2;
    int res=0;
    sort(arr,arr+n,greater<int>());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        res++;
        if(sum>halfsum)
        {
            return res;
        }
    }
}
int main()
{
    int arr[]={1,3,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minsum(arr,n);
    return 0;
}