long long findMinDiff(vector<long long> a, long long n, long long m){
    int diff;
    int min1=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<=n-m;i++)
    {
        diff=a[i+m-1]-a[i];
        min1=min(min1,diff);
    }
    
    return min1;
    //code
    
}