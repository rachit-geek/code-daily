#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int start2=mid+1;
    if(arr[mid]<=arr[start2])
    {
        return;
    }
    while(start<=mid and start2<=end)
    {
        if(arr[start]<=arr[start2])
        {
            start++;
        }
        else
        {
            int index=start2;
            int value=arr[start2];
            while(index!=start)
            {
                arr[index]=arr[index-1];
                index--;
            }
            arr[start]=value;
            start++;mid++;start2++; 
        }
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+ (r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    int arr[]={5,66,2,48,69,48,77};
    int size= sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    print_array(arr,size-1);
    return 0;
}