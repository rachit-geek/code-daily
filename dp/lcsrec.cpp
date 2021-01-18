//asdfghjkkjhgfdsdfgh
#include<bits/stdc++.h>
using namespace std;

int lcsrec(string X,string Y, int n, int m)
{
  if(n==0 or m==0)
  {
    return 0;
  }
  if(X[n-1]==Y[m-1])
  {
    return 1+lcsrec(X,Y,n-1,m-1);
  }
  else
  {
    return max(lcsrec(X,Y,n,m-1),lcsrec(X,Y,n-1,m));
  }
}
