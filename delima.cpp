#include<bits/stdc++.h>
///65656
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;int arr[n];
        set<int> s;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                    s.insert(abs(arr[i]-arr[j]));
            }
        }

        cout<<s.size()<<endl;
    }

}
