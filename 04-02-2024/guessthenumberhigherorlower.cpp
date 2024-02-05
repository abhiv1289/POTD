//guess the number higher or lower
//link-->https://discord.com/channels/1183032844751208528/1189532279542923294/1203770030844809276



/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       long long s=0;
       long long e=n;
       while(s<=e)
       {
           long long mid=s+(e-s)/2;
           if(guess(mid)==-1)
           e=mid-1;
           else if(guess(mid)==1)
           s=mid+1;
           else
           return mid;

       }
       return -1;
    }
};