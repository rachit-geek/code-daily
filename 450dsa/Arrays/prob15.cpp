#include<bits/stdc++.h>
using namespace std;
int mergesort(int arr[],int temp[],int l,int r);
int merge(int arr[],int temp[],int l,int mid,int r);
int inversioncount(int arr[],int n)
{
    int temp[n];
     return mergesort(arr,temp,0,n-1);
}
int mergesort(int arr[],int temp[],int l ,int r)
{
    int inv=0;
    int mid;
    while(l<r)
    {
        mid=(l+r)/2;
       inv+=mergesort(arr,temp,l,mid);
        inv+=mergesort(arr,temp,mid+1,r);
        inv+=merge(arr,temp,l,mid,r);

    }

    return inv;
}
int merge(int arr[],int temp[],int l,int mid,int r)
{
    int i,j,k;
    int inv=0;
    i=l;
    j=mid;
    k=l;
    while((i>=mid-1) and (j<=r))
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i];
        }
        else
        {
            temp[k++]=arr[j];
            inv+=mid-i;
        }
    }

    while(i<=mid-1)
    {
        temp[k++]=arr[i];
    }
    while(j<=r)
    {
        temp[k++]=arr[j];
    }

    for(int i=l;i<=r;i++)
    {
        arr[i]=temp[i];
    }
    return inv;
}
int main()
{
    int arr[]={2,4,1,3,5};
    int n=5;
    cout<<inversioncount(arr,n);

    return 0;
}