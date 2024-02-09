//Link to the question
//https://leetcode.com/problems/missing-number/



#include<algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // if(n==1 && nums[0]==1)
        // {
        //     return 0;
        // }
        // if(n==1 && nums[0]==0)
        // {
        //     return 1;
        // }
        
        sort(nums.begin(),nums.end());
        int ans=-1;
        if(nums[0]!=0)
        {
            return 0;
        }
       
       for(int i=0;i<nums.size()-1;i++)
       {
           if(nums[i]==nums[i+1]-1)
           {
              continue;
           }
           else 
           {
              ans= i+1;
              break;
           }
           
       }
       if(ans==-1)
       {
           return nums[n-1]+1;
       }
       else
       {
           return ans;
       }
    }
};