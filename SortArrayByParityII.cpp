//sort array by parity II;
//link-->https://discord.com/channels/1183032844751208528/1189532279542923294/1198696292784812043


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={648,831,560,986,192,424,997,829,897,843};
    
    vector<int>even;
    vector<int>odd;
    for (int i = 0; i < v.size(); i++)
    {
       if(v[i]%2==0)
       {
        even.push_back(v[i]);
       }
       else
       {
        odd.push_back(v[i]);
       }


    }  
    int x=0,y=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i%2==0)
        {
            v[i]=even[x];
            x++;
        }
        else
        {
            v[i]=odd[y];
            y++;
        }
        
    }
   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" ";
   }
   
    
    
    
    
    
    
}