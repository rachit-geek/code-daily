#include<bits/stdc++.h>
using namespace std;

void maxheapify(int final[],int y,int z)
{
    if(z>=y)
    {
        return;
    }
    int l=2*z + 1;
    int r=2*z + 2;
    int largest=z;
    if(l<y and final[l] > final[z])
    {
        largest=l;
    }
    if(r<y and final[r] > final[z])
    {
        largest=r;
    }
    if(largest!=z)
    {
        swap(final[largest],final[z]);
        maxheapify(final,y,largest);
    }
}

void buildmaxheap(int final[],int y)
{
    for(int i= y /2 - 1;i>=0;i--)
    {
        maxheapify(final,y,i);
    }
}

void merged(int final[],int arr[],int brr[],int n,int m)
{
    int j;
    for(j=0;j<n;j++)
    {
        final[j]=arr[j];
    }

    for(j=0;j<m;j++)
    {
        final[n+j]=brr[j];
    }
    buildmaxheap(final,n+m);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n],brr[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>brr[i];
	    }
	    int k=n+m;
	    int final[k];
	    merged(final,arr,brr,n,m);

	    for(int i=0;i<k;i++)
	    {
	        cout<<final[i]<<' ';
	    }
	}
	return 0;
}
