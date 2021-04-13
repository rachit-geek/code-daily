#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int last=arr[n-1];
    for(int k=n-2;k>=0;k--)
    {
        arr[k+1]=arr[k];
    }
    arr[0]=last;
}
int main()
{
    int arr[]={5,-88,66,-57};
   
    int arr_size=4;
    rotate(arr,arr_size);
    for(int i=0;i<arr_size;i++)
    {
        cout<<arr[i]<<' ';
    }
}