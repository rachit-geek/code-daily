#include<bits/stdc++.h>
#define ll long long
#define heap priority_queue
using namespace std;
int main()
{
    ll n,m,g=0;
	cin>>n>>m;
	ll a[n],b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	for(int i=1;i<n;i++)
		g=__gcd(g,a[i]-a[i-1]);
	for(int i=0;i<m;i++)
		cout<<__gcd(a[1]+b[i],g)<<" ";
	return 0;
}
