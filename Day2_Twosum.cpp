class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int size= nums.size();
         vector<int>ans; t.c-> O(n^2)
                         s.c-> O(n)

         for(int i=0;i<size;i++) //  2 7 11 15
         {
             for(int j=i+1;j<size;j++) //for 2 -> 7 11 15
             {
                 if(nums[i]+nums[j]==target)
                 {
                     ans.push_back(i);
                     ans.push_back(j);
                     break;
                 }
             }
         }
        return ans;
        
    }
};