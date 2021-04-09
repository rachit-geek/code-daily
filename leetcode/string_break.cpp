class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s1.length();
        int flag=0,flag2=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]>=s2[i])
            {
                flag++;
            }
            if(s2[i]>=s1[i])
            {
                flag2++;
            }
        }
        if(flag==n or flag2==n)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};