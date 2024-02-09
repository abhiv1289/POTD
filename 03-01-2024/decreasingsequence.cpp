// Decreasing sequence
//link-->https://www.geeksforgeeks.org/problems/decreasing-sequence2722/1

int minMoves( int a[],  int n, int k)
{
   long long int count=0;
   for(long long int i=0;i<n-1;i++)
   {
       if(a[i]<a[i+1])
       {
           while(a[i]<a[i+1])
           {
               a[i+1]=a[i+1]-k;
               count++;
           }
       }
   }
   return count % 1000000007;
}