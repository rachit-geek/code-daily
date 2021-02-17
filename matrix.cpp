#include<bits/stdc++.h>
using namespace std;
// problem based on matrix
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {
            cin>>arr[i][j];
        }


    }
    int sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        if(sum==0)
        {
            c++;
        }
    }
    int sum1=0,d=0;
    for(int i=0;i<m;i++)
    {
        sum1=0;
        for(int j=0;j<n;j++)
        {

            sum1+=arr[j][i];
        }
        if(sum1==0)
           {
               d++;
           }
    }
    int f=min(c,d);

    if(f%2==0)
    {
        cout<<"Vivek";
    }
    else
    {
        cout<<"Ashish";

    }
    cout<<'\n';

    }
    return 0;

}
