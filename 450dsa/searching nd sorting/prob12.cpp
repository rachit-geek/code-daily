vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here        
    vector<long long int> ans;
    long long int k=0;
    long long int y=n;
    long long pro=1;
    while(y--)
    {
        pro=1;
        for(int i=0;i<n;i++)
        {
            if(i==k)
            {
                continue;
            }
            else
            {
                pro*=nums[i];
            }
        }
        ans.push_back(pro);
        k++;
    }
    return ans;
}