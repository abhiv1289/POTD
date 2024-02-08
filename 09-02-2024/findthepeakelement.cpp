//Find the peak elements
//link-->https://leetcode.com/problems/find-peak-element/submissions/1170036738/



class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     if(nums.size()==1)
     {
         return 0;
     }
     if(nums.size()==2)
     {
         return (nums[0]>nums[1])?0:1;
     }
     int first=0;
     int second=0;
     for(int i=1;i<nums.size()-1;i++)
     {
         first=nums[i-1]-nums[i];
         second=nums[i]-nums[i+1];
         if(first<0 && second>0)
         {
             return i;
         }
     }

     return (nums[0] > nums[nums.size()-1])?0:nums.size()-1;  
    }
};