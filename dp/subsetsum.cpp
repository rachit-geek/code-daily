int subsetsum(vector<int> nums,int sum,int n){
        int t[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(j==0)
                {
                    t[i][j]=0;
                }
                if(i==0)
                {
                    t[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(nums[i]<=j)
                {
                    t[i][j]=t[i-1][j-nums[i-1]] + t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }
