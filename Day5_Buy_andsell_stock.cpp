class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit=0;
        int n= prices.size();
        int curr= prices[0]; // curr = 7
                            
        for(int i=1;i<n;i++) // [1,5,3,6,4]
        {

            if(prices[i]<curr)  // 1 < 7 ?  5<1
            {
                curr= prices[i]; // curr= 1
            }
            else
            {
                int curr_profit= prices[i]- curr;   // 5-1 = 4
                profit= max(curr_profit, profit); // 4 
            }


        }
        return profit;
        t.c-> O(n)
        s.c-> O(1)
    }
};