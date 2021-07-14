// Kadane's algo
// poractise
#include<bits/stdc++.h>
using namespace std;
class Solution:
{
    public:
    int max_sum(int arr[],int n)
    {
        int sum=INT_MIN;int sum1=0; 
        for(int i=0;i<n;i++) 
        {
            sum1+=arr[i];
            if(sum1>sum)
            {
                sum=sum1;
            }
            if(sum1<0)
            {
                sum1=0;
            }
        }
        return sum;
    }
}

int main()
{
    int t;cin>>t;while(t--)
    {
        int n;
        cin>>n;int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.max_sum(arr,n)<<endl;
    }
}
