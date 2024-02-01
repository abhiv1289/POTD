//arrangecoins
//link-->https://leetcode.com/problems/arranging-coins/description/ 


class Solution {
public:
    int arrangeCoins(long long n) {
        long long start=0;
        long long end=n+1;
        while(start<end)
        {
            long long mid=start+(end-start)/2;
            if((mid*(mid+1)/2)<=n && ((mid+1)*(mid+2)/2)>n)
            return mid;

            if((mid*(mid+1)/2)>n)
            end=mid;
            else
            start=mid;
        }
        return 1;
    }
};