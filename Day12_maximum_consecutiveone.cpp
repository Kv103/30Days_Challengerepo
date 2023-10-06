class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int maxi =0;
        int cnt =0;

        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                cnt++;//  [1,1] count=2;
                     //  [1,1,1] count=3;
                maxi = max(maxi,cnt); //2 //3
            }
            else{
                cnt =0;
            }
            
        }
    return maxi;
    // T-C> O(N)

    // SC-> O(1)    
    }

};