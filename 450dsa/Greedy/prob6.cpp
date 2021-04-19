class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        long long int sum=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            sum=(sum+a[i]*i)%mod;
        }
        return sum;
    }
};