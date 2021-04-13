#include<bits/stdc++.h>
using namespace std;
struct pair1{
    int min1;
    int max1;
};
struct pair1 getminmax(int arr[],int n)
{
    struct pair1 minmax1;
    int i;
    if(n==1)
    {
        minmax1.min1=arr[0];
        minmax1.max1=arr[0];
        return minmax1;
    }
    if(arr[0]>arr[1])
    {
        minmax1.min1=arr[1];
        minmax1.max1=arr[0];
    }
    else
    {

        minmax1.min1=arr[0];
        minmax1.max1=arr[1];
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax1.max1)
        {
            minmax1.max1=arr[i];
        }
        else if(arr[i]<minmax1.min1)
        {
            minmax1.min1=arr[i];
        }
    }
    return minmax1;
    }

int main()
{
    int arr[]={1,56,85,447,985};
    int arr_size=5;
    struct pair1 minmax1 =getminmax(arr,arr_size);
    cout<<"MIN element is "<<minmax1.min1;
    cout<<'\n';
    cout<<"MAX element is "<<minmax1.max1;

    return 0;
}
