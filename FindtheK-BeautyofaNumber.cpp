//find the k-beauty number
//link -->https://leetcode.com/problems/find-the-k-beauty-of-a-number/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divisorSubstrings(int num, int k) {
    string s = to_string(num);
    int l = s.length();
    if(l==1)
    {
        return 1;
    }
    string subpart;
    int div;
    int count = 0;
    for (int i = 0; i <=l-k; i++)
    {
            subpart=s.substr(i,k);
            div=stoi(subpart);
            if (div!=0)
            {
                if (num%div==0)
                {
                        count++;
                }
                
            }
    }
    return count;
    }
};