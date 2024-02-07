//coutn pairs whose sum is less than target
//link-->https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/



class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        sort(nums.begin(),nums.end());
        //using binary search
        int s=0;
        int e=nums.size()-1;
        while(s<e)
        {
           int sum=nums[s]+nums[e];
           if(sum<target)
           {
               count+=(e-s);
               s++;
           }
           else if(sum>=target)
           {
               e--;
           }
           else
           {
               s++;
           }
        }
        return count;
        
    }
};