//Union of two array
//link-->https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1



#include<vector>
#include<algorithm>
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       vector<int> v(n+m);
       int count=1;
       for(int i=0;i<n;i++)
       {
           v[i]=a[i];
       }
       for(int i=0;i<m;i++)
       {
           v[n+i]=b[i];
       }
       sort(v.begin(),v.end());
       for(int i=0;i<n+m-1;i++)
       {
           if(v[i]!=v[i+1])
           {
               count++;
           }
       }
       return count;
       
    }
};