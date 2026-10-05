class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = 0;
        int sell = 1;
        int max_profit=0;
        int c_profit=0;

        while(buy<sell && sell<n){
            if(prices[buy] > prices[sell]){
                buy = sell;
                sell++;
            }
            else{
                c_profit = prices[sell] - prices[buy];
                if(max_profit < c_profit){
                    max_profit = c_profit;
                }
                sell++;
            }
        }
        return max_profit;
    }
};
