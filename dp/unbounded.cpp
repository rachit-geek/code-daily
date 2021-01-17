#include<bits/stdc++.h>
using namespace std;

int unbound_knapsack(int wt[],int val[],int W,int n)
{
int t[n+1][W+1];
for(int i=0;i<n+1;i++)
{
for(int j=0;j<W+1;j++)
{
if(i==0)
{
t[i][j]=0;
}
if(j==0)
{
t[i][j]=1;
}
}
}
for(int i=1;i<n+1;i++)
{
for(int j=1;j<W+1;j++)
{
if(wt[i-1]<=j)
{
t[i][j]=t[i][j-wt[i-1]]+t[i-1][j];
}
else
{
t[i][j]=t[i-1][j];
}
}
}
return t[n][W];
}

int main()
{
int wt[]={};
int val[]={};
int W;
cin>>W;
int n=sizeof(wt[0]/wt);
unbound_knapsack(wt,val,W,n);
return 0;
}
