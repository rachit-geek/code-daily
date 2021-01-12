class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> ans;
        for(auto i:matrix)
            for(auto j:i)
            {
                ans.push(j);
                if(ans.size()>k)
                {
                    ans.pop();
                }
            }
        
        return ans.top();
        
    }
};
