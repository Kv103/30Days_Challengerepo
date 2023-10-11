class Solution {
public:
    int reverse(int x) {
        
        
    int rem;
    int ans=0;

    while(x!=0)
    {
        rem=x%10;
        
        if((ans>INT_MAX/10) ||(ans<INT_MIN/10))
        {
            return 0;
        }
        // 123 
        ans=(ans*10)+rem; //0*10+ 3= 3
                           // 3*10 + 2 = 32
                           // 32*10 + 1 = 321

        x=x/10;

    }

   
   return ans;
//    t-c-> O(N)
//    S-C-> O(1)
        
    }
    
};