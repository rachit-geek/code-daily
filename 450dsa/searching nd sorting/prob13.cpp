#include<bits/stdc++.h>
using namespace std;
int countBits(int a)
    {
        int count=0;
        while(a)
        {
            if(a & 1)
            {
                count+=1;
            }
            a=a >> 1;
        }
        return count;
    }
    int cmp(int a,int b)
    {
        int count1=countBits(a);
        int count2=countBits(b);
        if(count1<=count2)
        {
            return false;
        }
        return true;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr + n, cmp);
    }
    void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
    int main()
{
    int arr[] = { 5,2,3,9,4,6,7,15,32 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortBySetBitCount(arr, n);
    printArr(arr, n);
    return 0;
}