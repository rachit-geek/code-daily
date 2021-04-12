class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> finalans;
        int n=arr.size();
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                    if(arr[i]+arr[j]+arr[l]+arr[r]==k)
                    {
                        vector<int> ans;
                        ans.push_back(arr[i]);
                         ans.push_back(arr[j]);
                          ans.push_back(arr[l]);
                           ans.push_back(arr[r]);
                           finalans.push_back(ans);
                           
                           l++;r--;
                    }
                    else if(arr[i]+arr[j]+arr[l]+arr[r]<k)
                    {
                        l++;
                    }
                    else
                    {
                        r--;;
                    }
                }
            }
        }
        return finalans;
        
        
        // Your code goes here
    }
};
