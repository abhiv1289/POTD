// Check wether the kth bit is set or not
//link --> https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1



bool checkKthBit(int n, int k)
    {
        
        string binary;
        while(n!=0){
           char digit = (n%2) +'0';
            binary = digit + binary;
            n/=2;
        }
        
       long long int N = binary.length();
       if(k > N || k < 0)
       {
           return false;
       }
       
       if(binary[N - k - 1] == '1'){
           
           return true;
       }
       return false;
    }