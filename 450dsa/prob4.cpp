#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int c=0,d=0,e=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
            else if(a[i]==1)
            {
                d++;
            }
            else
            {
                e++;
            }
        }
        
        int i=0;
        while(c>0)
        {
            a[i++]=0;
            c--;
        }
        while(d>0)
        {
            a[i++]=1;
            d--;
        }
        while(e>0)
        {
            a[i++]=2;
            e--;
        }
        
    }
    
};

int main()
{
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution ob;
        ob.sort012(a,n);

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
