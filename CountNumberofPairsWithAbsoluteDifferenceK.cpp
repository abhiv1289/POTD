//count number
//link -->https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int x;
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                  x=nums[i]-nums[j];
                  if(x<0)
                  {
                      x=-x;
                  }
                  if(x==k)
                  {
                      count++;
                  }
            }
        }
        return count;
    }
};