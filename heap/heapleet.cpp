class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> g(stones.begin(),stones.end());
        while(g.size()>1)
        {
            int y=g.top();
            g.pop();
            int x=g.top();
            g.pop();
            if(x!=y)
            {
                g.push(y-x);
            }
        }
        
        if(g.empty())
        {
            return 0;
        }
        else
        {
            return g.top();
        }
        
        
    }
};
