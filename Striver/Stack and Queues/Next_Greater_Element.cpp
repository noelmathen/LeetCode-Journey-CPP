// //BRUTE FORCE SOLUTION(Time limit will exceed)
// class Solution {
// public:
//     vector<int> nextLargerElement(vector<int> arr) {
//        int n=arr.size();
//        for(int i=0; i<n; i++){
//             int nextLarge=INT_MAX;
//             for(int j=i+1; j<n; j++){
//                 if(arr[j]>arr[i]){
//                     nextLarge = arr[j];
//                     break;
//                 }
//             }
//             nextLarge==INT_MAX ? arr[i]=-1 : arr[i]=nextLarge;
//        }
//        arr[n-1] = -1;
//        return arr;
//     }
// };


class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        stack<int> stk;
        int n=arr.size();
        vector<int> nge(n);
        for(int i=n-1; i>=0; i--){
            while(!stk.empty() && stk.top() <= arr[i])
                stk.pop();
            if(stk.empty())
                nge[i] = -1;
            else
                nge[i] = stk.top();
            stk.push(arr[i]);
        }
        return nge;

    }
};
