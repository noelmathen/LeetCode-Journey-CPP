// //BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int sumSubarrayMins(vector<int> &arr) {
//         int n = arr.size();
//         int total=0;
//         int mod = 1e9+7;
//         for(int i=0; i<n; i++){
//             int minVal=INT_MAX; 
//             for(int j=i; j<n; j++){
//                 minVal = min(minVal, arr[j]);
//                 total = (total + minVal)%mod;
//             }
//         }
//         return total;
//     }
// };



class Solution {
public:
    vector<int> findNSE(vector<int> &arr){
        int n = arr.size();
        vector<int> nse(n);
        stack<int> stk;
        for(int i=n-1; i>=0; i--){
            while(!stk.empty() && arr[stk.top()] >= arr[i])
                stk.pop();
            if(stk.empty())
                nse[i] = n;
            else
                nse[i] = stk.top();
            stk.push(i);
        }
        // for(auto x : nse){
        //     cout<<x<<" ";
        // }
        return nse;
    }

    vector<int> findPSE(vector<int> &arr){
        int n = arr.size();
        vector<int> pse(n);
        stack<int> stk;
        for(int i=0; i<n; i++){
            while(!stk.empty() && arr[stk.top()] > arr[i])
                stk.pop();
            if(stk.empty())
                pse[i] = -1;
            else
                pse[i] = stk.top();
            stk.push(i);
        }
        // cout<<endl;
        // for(auto x : pse){
        //     cout<<x<<" ";
        // }
        return pse;
    }

    int sumSubarrayMins(vector<int> &arr) {
        int n = arr.size();
        vector<int> nse(n);
        nse = findNSE(arr);
        vector<int> pse(n);
        pse = findPSE(arr);
        int result=0, mod=1e9+7, left, right;
        for(int i=0; i<n; i++){
            left = i - pse[i];
            right = nse[i] - i;
            long long freq = (left*right*1LL);
            int val = (freq*arr[i]*1LL)%mod;
            result = (result+val)%mod;
        }
        return result;
    }
};
