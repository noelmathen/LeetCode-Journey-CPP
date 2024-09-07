//My solution - 1
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), hold = INT_MIN, cash = 0;        
        for (int i = 0; i < n; ++i) {
            hold = max(hold, cash - prices[i]); // Update hold state
            cash = max(cash, hold + prices[i]); // Update cash state
        }
        return cash;
    }
};


// //My solution - 2
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size(), maxProfit=0, minPrice=INT_MAX, totalProfit=0;
//         for(int i=0; i<n; i++){
//             if(prices[i]<minPrice)
//                 minPrice = prices[i];
//             else if(prices[i]-minPrice > maxProfit){
//                 maxProfit = prices[i]-minPrice;
//                 totalProfit += (maxProfit);
//                 maxProfit = 0;
//                 minPrice = prices[i];
//             }
                
//         }
//         return totalProfit;
//     }
// };

// //My solution - 3
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size(), maxProfit=0, minPrice=INT_MAX, totalProfit=0;
//         for(int i=0; i<n; i++){
//             minPrice = min(minPrice, prices[i]);
//             maxProfit = max(maxProfit, prices[i]-minPrice);
//             totalProfit += maxProfit;
//             maxProfit = 0;
//             minPrice = prices[i];
//         }
//         return totalProfit;

//     }
// };