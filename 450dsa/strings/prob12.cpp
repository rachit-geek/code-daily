class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int max1=INT_MIN,max2=INT_MIN;
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto t=mp.begin();t!=mp.end();t++)
        {
            if(t->second>max1)
            {
                max2=max1;
                max1=t->second;
            }
            else if(t->second>max2 and max2!=max1)
            {
                max2=t->second;
            }
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==max2)
            {
                return it->first;
            }
        }
    }  
};