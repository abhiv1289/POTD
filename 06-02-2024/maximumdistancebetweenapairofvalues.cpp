//maximum distance between a pair of values
//link-->https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/solutions/




class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxd=0;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums2[j]>=nums1[i])
            {
                maxd=max(maxd,(j-i));
                j++;
               

            }
            else if(nums2[j]<nums1[i])
            {
                i++;
            }
        }
        return maxd;
    }
};