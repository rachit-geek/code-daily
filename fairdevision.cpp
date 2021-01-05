#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];int c=0,d=0,sum=0;
        int temp;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            mp[temp]++;
            sum+=temp;
        }
        if(sum%2==0)
        {
            if(sum/2 %2==0 or mp[1])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
