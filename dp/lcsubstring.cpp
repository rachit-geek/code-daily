int longest_cpmmon_substring(string X,string Y,int m,int n)
{
if(n==0 or m==0)
{
return 0;
}
for(int i=0;i<m+1;i++)
{
for(int j=0;j<n+1;j++)
{
if(i==0 or j==0)
{
t[i][j]=0;
}
else
{
if(X[i-1]==Y[j-1])
{
return 1 + t[i-1][j-1];
}
else
{
return 0;
}
}
}
