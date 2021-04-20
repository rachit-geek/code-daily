//Activity Selection problem when finish time is not sorted...
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool static sortbysec(const pair<int,int>&a,const pair<int,int>& b)
    {
        return (a.second>b.second);
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(start[i],end[i]));
        }
        sort(v.begin(),v.end(),sortbysec);
        int ans=1;
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(v[i].first>v[j].second)
            {
                ans++;
                j=i;
            }
        }
        return ans;
    }
};

// Acitivity selection problem when finish time is sorted
 int ans=1;
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(start[i]>end[j])
            {
                ans++;
                j=i;
            }
        }
        return ans;
    }