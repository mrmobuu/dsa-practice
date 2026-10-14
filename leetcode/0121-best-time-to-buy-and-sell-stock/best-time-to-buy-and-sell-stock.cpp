class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int curMin = prices[0];
        int n = prices.size();
        for(int i = 0;i < n;i++){
            int curProfit = prices[i] - curMin;
            curMin = min(curMin,prices[i]);
            if(curProfit > profit){
                profit = curProfit;
            }
        }
        return profit;
    }
};
