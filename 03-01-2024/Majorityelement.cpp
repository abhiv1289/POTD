// Majority element
//link-->https://leetcode.com/problems/majority-element/description/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
    if(nums.size()==1)
    {
        return nums[0];
    }
    sort(nums.begin(),nums.end());
    int element;
    int count=1;
    int sum=0;
    for (int i = 0; i < nums.size()-1; i++)
    {
            if(nums[i]==nums[i+1])
            {
                count++;
                
            }
            else
            {
                count=1;
            }
            if(sum<=count)
            {
                sum=count;
                element=nums[i];
                
            }
    }
    return element;
    }
};