int t[i+1][j+1];
memset(t,-1,sizeof(t));

int solve(int arr[],int i,int j)
{
if(i<=j)
{
return 0;
}
if(t[i][j]!=-1)
{
return t[m][n];
}
int tempans,mn=INT_MAX;
for(int k=i;k=j-1;k++)
{
tempans=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);

if(tempans<mn)
{
mn=tempans;
}
return t[i][j]=mn;
}
return t[i][j];
