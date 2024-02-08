//Worms
//link-->https://codeforces.com/problemset/problem/474/B


#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& sumofpiles,int target)
{
    int start=1;
    int end=sumofpiles.size()-1;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end)
    {
        if(sumofpiles[mid]>target)
        {
           ans=mid;
            end=mid-1;
        }
        else if(sumofpiles[mid]<target)
        {
            start=mid+1;
        }
        else{
            return mid;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int piles[n];
    for(int i=0;i<n;i++)
    {
        cin>>piles[i];
    }
    int m;
    cin>>m;
    int juicy[m];
    for(int i=0;i<m;i++)
    {
        cin>>juicy[i];
    }
    vector<int> sumofpiles;
    int sum=0;
    sumofpiles.push_back(0);
    for(int i=0;i<n;i++)
    {
        sum=sum+piles[i];
        sumofpiles.push_back(sum);
    }
    for(int i=0;i<m;i++)
    {
        int ans=binarySearch(sumofpiles,juicy[i]);
        cout<<ans<<endl;
    }
   
    
}