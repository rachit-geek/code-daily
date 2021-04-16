#include<bits/stdc++.h> // create sub sets recursively
using namespace std;
void subsetsSums(int arr[],int l,int r,int sum=0)
{
    if(l>r)
    {
        cout<<sum<<' ';
        return;
     }
     subsetsSums(arr,l+1,r,sum+arr[l]);
     subsetsSums(arr,l+1,r,sum);
}
int main()
{
    int arr[] = {5, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    subsetsSums(arr, 0, n-1);
    return 0;
}