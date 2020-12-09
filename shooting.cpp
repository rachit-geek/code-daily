#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;cin>>n;
    vector<pair<int,int>> p(n);
 
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        p[i].second=i+1;
    }
 
    sort(p.begin(),p.end(),greater<>());
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=p[i].first*i+1;
    }
 
    cout<<ans<<endl;
 
    cout<<p[0].second;
    for(int i=1;i<n;i++){
        cout<<" "<<p[i].second;
    }
    cout<<endl;
    ;
    return 0;
}
