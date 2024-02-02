//find mininum rotated sorted array
//link-->https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/


class Solution {
public:
    int findMin(vector<int>& nums) {
         int s=1;
   int e=nums.size()-2;
   int mid=s+(e-s)/2;
   while(s<=e)
   {
    if(nums[mid]>nums[mid-1]&&nums[mid]<nums[mid+1]&&nums[mid]>nums[0])
    {
        if(nums[mid]>nums[nums.size()-1])
        {
            s=mid+1;
        }
        else{
        e=mid-1;
        }
    }
    if(nums[mid]>nums[mid-1]&&nums[mid]<nums[mid+1]&&nums[mid]<nums[0])
    {
      e=mid-1;
    }
    if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]&&nums[mid]>nums[0])
    {
        s=mid+1;
    }
    if(nums[mid]<nums[mid-1]&&nums[mid]<nums[mid+1]&&nums[mid]<nums[0])
    {
       // cout<<"-->"<<nums[mid];
        return nums[mid];
    }
     mid=s+(e-s)/2;
   } 
   if(nums[0]<nums[nums.size()-1])
   {
    //cout<<"*-->"<<nums[0]<<endl;
    return nums[0];
   }
   return nums[nums.size()-1]; 
    }
};