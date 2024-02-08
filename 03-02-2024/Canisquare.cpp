//CanIsquare?
//link-->https://codeforces.com/problemset/problem/1915/C



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        
       long long size;
       cin>>size;
       long long arr[size];
       for (long long i = 0; i < size; i++)
       {
        cin>>arr[i];
       }
       long long sum=0;
       for (long long i = 0; i < size; i++)
       {
            sum=sum+arr[i];
       }
       long long end=sqrt(sum);
       long long start=1;
       //binary search
       long long mid=start+(end-start)/2;
       bool value=false;
       while(start<=end)
       {
        long long square=mid*mid;
        if(square==sum)
        {
            
            value=true;
            break;
        }
        else if(square<sum)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
       }
       if(value==false)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
       
       





    }
    return 0;
}