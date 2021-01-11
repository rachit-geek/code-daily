#include<bits/stdc++.h>
using namespace std;
// function for shift down 
// function to create max and min heap.
void heapify(int arr[],int n,int i)
{
int l=2*i+1;
int r=2*i+2;
int largest=i;
if(l<n and arr[l]>arr[i]
{
largest=l;
}
if(r<n and arr[r]>arr[largest]{
largest=r;
}
if(largest!=i)
{
  swap(arr[i],arr[largest]);
  heapify(arr,n,largest);
}
int main()
{
heapify(arr,n,i);
}

