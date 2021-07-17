class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,j,maxp=0;int cp;
        for(int i=0;i<prices.size();i++)
        {
            cp=prices[i];
            for(j=i+1;j<prices.size();j++)
            {
                if(prices[j]-cp>maxp)
                {
                    maxp=prices[j]-cp;
                } 
            }
        }
        return maxp;
        
    }
};
