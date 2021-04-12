class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[l]<=nums[mid]) // to check whether array is left sorted
            {
                if(nums[mid]>target and nums[l]<=target) // means if(nums[l]>=key and nums[mid]<=key)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(nums[mid]<target and nums[r]>=target)  //means if(key>=arr[mid] and key<=nums[r])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return -1;
    }
    
};