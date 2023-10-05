class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        int size= nums.size();

        priority_queue<int>p; //max heap 

        for(int i=0;i<size;i++)
        {
            p.push(nums[i]);//6; 
                             //5
                             //4
                             //3
                             //2
                             //1
        }

        for(int i=1;i<k;i++)  //1 
        {
            p.pop();
        }

        return p.top();
        t-c-> O(N)
        S-C-> O(N)
    }
};