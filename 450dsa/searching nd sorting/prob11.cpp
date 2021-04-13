class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
       long long ans=0,sum=0;
       map<int,int> mp;
       mp[0]=1;
       for(long long i=0;i<n;i++)
       {
           sum+=arr[i];
           if(mp.find(sum)!=mp.end())
           {
               ans+=mp[sum];
           }
           mp[sum]++;
       }
     return ans;  
    }
};