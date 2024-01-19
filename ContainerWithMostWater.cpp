//container with most amount of water
//link-->https://leetcode.com/problems/container-with-most-water/




#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = height.size();
        int max = 0;
        int mini = 0;
        int product;
        for (int i = 0, j = l - 1; i<l - 1, j> 0;) {
            mini = min(height[i], height[j]);
            product = mini * (j - i);
            if (product > max) {
                max = product;
            }
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return max;
    }
};