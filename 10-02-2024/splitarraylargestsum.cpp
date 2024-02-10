// Split array largest sum
//link--> https://leetcode.com/problems/split-array-largest-sum/description/


class Solution {
    int ispossible(vector<int>& nums,int k,int mid)
    {
        int count=1;
        int presum=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>mid)
            {
                return 0;
            }
           presum=presum+nums[i+1];
           if(presum<=mid)
           {
              continue;
           }
           else
           {
               count++;
               presum=nums[i+1];
           }
        }
        return count;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        
      int prefixsum=0;
      for(int i=0;i<nums.size();i++)
      {
          prefixsum+=nums[i];
      }
      int start=nums[0];
      int end=prefixsum;
      int mid=start+(end-start)/2;
      int ans=INT_MAX;
      while(start<=end)
      {
          int count=ispossible(nums,k,mid);
          
          if(count<=k && mid<=ans && count!=0)
          {
              ans=mid;
              end=mid-1;
          }
          else
          {
              start=mid+1;
          }
          mid=start+(end-start)/2;
      }
      return ans;
    }
};