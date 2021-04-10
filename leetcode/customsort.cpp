class Solution {
public:
    string customSortString(string S, string T) {
      string ans;
        map<char,int> mp;
        for(int i=0;i<T.length();i++)
        {
            mp[T[i]]++;
        }
        for(int i=0;i<S.size();i++)
        {
            if(mp.find(S[i])!=mp.end())
            {
                int cnt=mp[S[i]];
                while(cnt--)
                {
                    ans+=S[i];
                }
                mp.erase(S[i]);
            }
        }
        for(auto x:mp)
        {
            int t=x.second;
            while(t--)
            {
                ans+=x.first;
            }
        }
        
        return ans;
    }
};