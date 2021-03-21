#include<bits/stdc++.h>
using namespace std;
// union of two arrays
void union1(int arr[],int n,int brr[],int m)
{

        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(brr[i]);
        }

        cout<<s.size();t
}
// for intersection create empty array and then check if first element of first array is present in the second array then store it into the third array
int main()
{
    int arr[]={5,-88,66,-57};
    int brr[]={48,66,-892};
    int brr_size=3;
    int arr_size=4;
    union1(arr,arr_size,brr,brr_size);
    
}