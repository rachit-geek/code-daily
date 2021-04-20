#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n)
{
    sort(arr,arr+n);
    vector<int> ans;
    int sum=0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        i++;j--;
    }
      if(n%2!=0)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<ans.size();i++)
    {
        sum+=abs(ans[i]-ans[(i+1)%n]);
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxsum(arr,n);
}
