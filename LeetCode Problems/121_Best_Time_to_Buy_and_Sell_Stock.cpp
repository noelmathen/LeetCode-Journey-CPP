//OPTIMAL SOLUTION(I DID THIS THANNE MUHUHUHUHUHAHAHAHAH)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), maxProfit=0, l=0, r=1, profit=0;
        while(r<n){
            if(prices[r]<=prices[l])
                l=r;
            else
                maxProfit = max(maxProfit, prices[r]-prices[l]);
            r++;
        }
        return maxProfit;
    }
};


// //BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size(), maxProfit=0;
//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(prices[j]>prices[i] && prices[j]-prices[i]>maxProfit)
//                     maxProfit = prices[j]-prices[i];
//             }
//         }
//         return maxProfit;
//     }
// };







//SHITS BEFORE A LONG TIME



// class Solution {
// public:
//     int largest(int a, vector<int>& prices){
//         int large=prices[a];
//         for(int j=a+1; j<prices.size(); j++){
//             if(prices[j]>large)
//                 large=prices[j];
//         }
//         // cout<<large<<", ";
//         if(large!=prices[a])
//             return large;
//         return prices[a];
//     }

//     int maxProfit(vector<int>& prices) {
//         int max=0, large=0;
//         for(int i=0; i<prices.size(); i++){
//             if(largest(i, prices)==prices[i])
//                 continue;
//             if(largest(i, prices) - prices[i] > max){
//                 max = largest(i, prices) - prices[i];
//                 cout<<max<<", ";
//             }
//         }
//         return max;
//     }
// };

// //from chatgpt. i do not understand
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minPrice = INT_MAX; // Initialize minPrice to a large value
//         int maxProfit = 0;
        
//         for (int price : prices) {
//             minPrice = min(minPrice, price); // Update minPrice if a smaller price is found
//             maxProfit = max(maxProfit, price - minPrice); // Calculate max profit
//         }
//         return maxProfit;
//     }
// };


// //two pointer
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int l=0, r=1, maxProfit=0, currentProfit=0;
//         while(r!=prices.size()){
//             if(prices[l] > prices[r])
//                 l=r++;
//             else{
//                 currentProfit = prices[r]-prices[l];
//                 maxProfit = max(maxProfit, currentProfit);  //from Math library
//                 r++;
//             }
//         }
//         return maxProfit;
//     }
// };

