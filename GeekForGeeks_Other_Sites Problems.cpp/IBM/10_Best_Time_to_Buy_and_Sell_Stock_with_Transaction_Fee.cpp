//My solution - 1
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size(), hold = INT_MIN, cash = 0;        
        for (int i = 0; i < n; ++i) {
            hold = max(hold, cash - prices[i]); //Continuing to hold the stock from a previous day (hold) OR Buying a new stock today (cash - prices[i])
            cash = max(cash, hold + prices[i] - fee); // Continuing to not hold a stock (cash) OR Selling the stock today (hold + prices[i] - fee)
        }
        return cash;
    }
};
