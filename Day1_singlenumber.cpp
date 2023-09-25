class Solution {
public:
    int singleNumber(vector<int>& nums) {
        

      // 2 2 1  //num= 2

     // 2-> 2 2 1   count=2 
 
      // 2-> 2 2 1  count=2

      // 1-> 2 2 1  count=1

        int n= nums.size();
        int ans;

        for(int i=0;i<n;i++)
        {
            int count=0;
            int num= nums[i];  
            for(int j=0;j<n;j++)
            {
                
                if(nums[j]==num)
                {
                   count=count+1; 

                }
              

            }
              if(count==1)
                {
                    return nums[i];
                }
        }

              return -1;  
        
    }

};