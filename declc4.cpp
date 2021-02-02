#include<bits/stdc++.h>
using namespace std;
//problem solving
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--)
    {
        int n,k,i,j;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
            arr[i]=-(i+1);
        }
        if(k<=n/2)
        {
            if(k%2==0)
            {
                j=1;
                while(k--)
                {

                    arr[j]=-1*arr[j];
                    j=j+2;
                }

            }
            else
            {
                j=0;
                while(k--)
                {

                    arr[j]=-1*arr[j];
                    j=j+2;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                arr[i]=arr[i]*-1;
            }


            if(k%2==0)
            {
                j=0;
                k=n-k;
                while(k--)
                {

                    arr[j]=-1*arr[j];
                    j=j+2;
                }

            }

            else
            {
                j=1;
                k=n-k;
                while(k--)
                {

                    arr[j]=-1*arr[j];
                    j=j+2;
                }
            }

        }


        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }



        cout<<'\n';

    }

}
