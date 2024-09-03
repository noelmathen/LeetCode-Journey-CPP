//My solution 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), maxProfit=0, minPrice=INT_MAX, totalProfit=0;
        for(int i=0; i<n; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
            totalProfit += maxProfit;
            maxProfit = 0;
            minPrice = prices[i];
        }
        return totalProfit;

    }
};

// //Prinzinte Solution
// class Solution {
//   public:
//     int stockBuyAndSell(int n, vector<int> &prices) {
//         int min=prices[0],max=0,profit=0,i=1,index=-1;
//         while(i<n){
//             if(prices[i]<min)
//                 min=prices[i];
//             else if(prices[i]-min>max){
//                 max=prices[i]-min;
//                 profit+=max;
//                 min=prices[i];
//                 max=0;
//             }
//             i++;
//         }
//         return profit;
//     }
// };