//second largest element in the array
class Solution{
public:	
	// Function returns the second
	// largest elements
	long long int print2largest(int arr[], int n) {
	    long long int target=0;
	    long long int max=arr[0];
	    int ans=-1;
	    for(int i=0;i<n-1;i++)
       {
         if(arr[i]==arr[i+1])
         {
             if(i==n-2)
             {
                 return ans;
             }
             continue;
         }
         else{
             break;
         }
       }
	    
	    
	    for(int i=0;i<n;i++)
	    {
	       if(max<arr[i])
	       {
	           target=i;
	           max=arr[i];
	       }
	    }
	    long long int max1=-10000;
	    for(int i=0;i<n;i++)
	    {
	      
	      if(max1<arr[i] && max!=arr[i])
	      {
	          max1=arr[i];
	          ans=max1;
	      }
	    }
	    
	   return ans; 
	}
};