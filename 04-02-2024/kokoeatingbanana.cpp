//koko eating bananas
//link-->https://discord.com/channels/1183032844751208528/1189532279542923294/1203770030844809276



class Solution {
    long long int  check(vector<int>& piles,long long int  mid)
    {
       long long int  sum=0;
        for(long long int  i=0;i<piles.size();i++)
        {
            sum+= (piles[i]/mid)+(piles[i]%mid!=0);
        }
        return sum;
    }
public:
    long long int  minEatingSpeed(vector<int>& piles, long long int  h) {
        //sort(piles.begin(),piles.end());
        long long int   start=1;
        long long int   end=*max_element(piles.begin(),piles.end());
        long long int   mid=start+(end-start)/2;
        
        
        while(start<=end)
        {
           
           
            
            if(check(piles,mid)<=h)
            {
                end=mid-1;
                
            }
            else 
            {
                start=mid+1;
            }
            
            mid=start+(end-start)/2;
            
        }
        
        return start;
    }
};