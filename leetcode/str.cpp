// problem 2
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
        {
            return 0;
        }
        int n=haystack.length()- needle.length()+1;
        for(int i=0;i<n;i++)
        {
            int j=0,k=i;
            while(j<needle.length() and needle[j]==haystack[k])
            {
                j++;k++;
            }
            if(j==needle.length())
            {
                return i;
            }
        }
        
        return -1;
    }
};
