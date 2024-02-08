//Single Element Sorted Array
//link-->https://leetcode.com/problems/single-element-in-a-sorted-array/


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()<3)
        {
            return nums[0];
        }
       
         
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            if(mid%2==0)
            {
                if(nums[mid-1]==nums[mid])
                {
                    e=mid-1;
                }
                else if(nums[mid]==nums[mid+1])
                {
                    s=mid+1;
                }
            }
            else
            {
              if(nums[mid-1]==nums[mid])
                {
                     s=mid+1;
                }
                else if(nums[mid]==nums[mid+1])
                {
                   
                    e=mid-1;
                }  
            }
            mid=s+(e-s)/2;
            if(mid==0)
            {
              return nums[mid];
            }
            if(mid==(nums.size()-1))
            {
                return nums[mid];
            }
        }
        return -1;
    }
};