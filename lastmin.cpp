//problem on codeforces
#include<bits/stdc++.h>
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
            if(s.count(arr[i]))
            {
                arr[i]++;
            }
            s.insert(arr[i]);
        }

        cout<<s.size()<<endl;
    }

}
