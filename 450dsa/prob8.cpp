#include<bits/stdc++.h>    
using namespace std;

// kadane's Algo
 void maxSubarraySum(int arr[], int n){
        int sum=INT_MIN,sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1=sum1+arr[i];
            if(sum1>sum)
            {
                sum=sum1;
            }
            if(sum1<0)
            {
                sum1=0;
            }
        }
        
        cout<<sum;
        // Your code here
        
    }

int main()
{
    int arr[]={5,-88,66,-57};
    int arr_size=4;
    maxSubarraySum(arr,arr_size);

    return 0;
}