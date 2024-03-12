// Set the rightmost unset bit
//link--> https://www.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1



int setBit(int N)
    {
         if(N & N+1){
             return (N | N+1);
         }
         else{
             return N;
         }
    }