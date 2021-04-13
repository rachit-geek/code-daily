#include<bits/stdc++.h>
using namespace std;
void swap()
void rearrange(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                 swap(arr[i],arr[j]);
                j++;
            }
           
        }
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    int arr[]={5,-88,66,-57};
    int arr_size=4;
    rearrange(arr,arr_size);
    print(arr,arr_size);
}