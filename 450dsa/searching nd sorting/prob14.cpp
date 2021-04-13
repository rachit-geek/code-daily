 class Solution {
private:
public:
void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
int indexof(vector<int> &arr, int ele)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}
 
	int minSwaps(vector<int>&nums){
	    // Code here
	    int ans=0;
	    vector<int>nums2(nums.begin(),nums.end());
	    sort(nums2.begin(),nums2.end());
	    for(int i=0;i<nums.size();i++)
	    {
	        if(nums[i]!=nums2[i])
	        {
	            ans++;
	            swap(nums,i,indexof(nums,nums2[i]));
	        }
	    }
	    return ans;
	}
};
//-----optimized version--------
void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
	int minSwaps(vector<int>&nums){
	    // Code here
	    int ans=0;
	    vector<int>nums2=nums;
	    sort(nums2.begin(),nums2.end());
	    map<int,int>mp;
	    int n=nums.size();
	    for(int i=0;i<n;i++)
	    {
	        mp[nums[i]]=i;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(nums[i]!=nums2[i])
	        {
	            ans++;
	            int init=nums[i];
	            swap(nums,i,mp[nums2[i]]);
	            mp[init]=mp[nums2[i]];
	            mp[nums2[i]]=i;
	        }
	    }
	    
	    return ans;
	}