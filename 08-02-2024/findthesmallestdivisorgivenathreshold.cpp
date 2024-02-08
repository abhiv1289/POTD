// Find the smallest divisor given a threshold
//link--> https://discord.com/channels/1183032844751208528/1189532279542923294/1204860086225469471


class Solution {
    long long findsum(vector<int>& nums,long long mid)
    {
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%mid==0)
            {
                sum=sum+(nums[i]/mid);
            }
            else 
            {
                sum=sum+((nums[i]/mid)+1);
            }
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, long long threshold) {
     sort(nums.begin(),nums.end());
     long long start=1;
     long long end=nums[nums.size()-1];
     long long mid=start+(end-start)/2;
     while(start<=end)
     {
         long long sum = findsum(nums,mid);
         if(sum > threshold)
         {
             start=mid+1;
         }
         else if(sum<=threshold)
         {
             end=mid-1;
         }
         mid=start+(end-start)/2;
     }
     return start;   
    }
};