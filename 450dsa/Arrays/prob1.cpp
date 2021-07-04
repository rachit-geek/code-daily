 // PROGRAM TO REVERSE AN ARRAY   
#include<bits/stdc++.h>      
using namespace std; 
void revarr(int arr[],int n) 
{ 
    int start=0;int end=n-1; 
    int temp;  
    while(start<end) 
    { 
        temp=arr[start]; 
        arr[start]=arr[end]; 
        start++;   
        end--;
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
   int arr[]={1,5,9,88,56,5336,666};
   int arr_size=7;
   revarr(arr,arr_size);
   print(arr,arr_size);
   return 0; 
}
