// Longest Subsequence With Limited Sum
//link-->https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/


class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
      int sum=0;
      int count=0;
      vector<int> ans;
      sort(nums.begin(),nums.end());
      for(int i=0;i<queries.size();i++)
      {
          count=0;
          sum=0;
          for(int j=0;j<nums.size();j++)
          {
              sum=sum+nums[j];
              
              if(sum>queries[i])
              { 
                  
                  break;
              }
              else{
                  count++;
              }
             
          }
          ans.push_back(count);
      }
      return ans;  
    }
};