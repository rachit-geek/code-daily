#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;int arr[n];
    int flag=1;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]/2<<' ';
        }
        else
        {
            if(flag%2==0)
            {
                cout<<floor(arr[i]/2)<<' ';
                flag++;
            }
            else
            {
                cout<<ceil(arr[i]/2)<<' ';
                flag++;
            }
        }
    }


}
