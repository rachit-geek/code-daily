//permutation of a number to make lexographcially to make a next larger number
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        while(i>=0 and nums[i+1]<=nums[i])
        {
            i--;
        }
        if(i>=0)
        {
            int j=nums.size()-1;
            while(j>=0 and nums[j]<=nums[i])
            {
                j--;
            }
            
            swap(nums,i,j);
        }
        reverse(nums,i+1);
    }
   private:    
     void reverse(vector<int>&nums,int srt)
    {
        int i=srt;
        int j=nums.size()-1;
        while(i<j)
        {
            swap(nums,i,j);
            i++;j--;
        }
    }
    
     void swap(vector<int>&nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }

    };