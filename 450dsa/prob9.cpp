class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> s;
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            s[nums[i]]++;
        }
        int ans;
        for(auto k:s)
        {
            if(k.second>1)
            {
                ans=k.first;
                break;
            }
        }
        return ans;
    }
};