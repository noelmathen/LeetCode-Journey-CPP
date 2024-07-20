//OPTIMAL SOLUTION
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(), maxSum=-99999, sum=0;
        for(int i=0; i<n; i++){
            if(sum<0)
                sum=0;
            sum+=nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};


// //BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size(), maxSum=-99999, sum=0;
//         for(int i=0; i<n; i++){
//             sum=0;
//             for(int j=i; j<n; j++){
//                 sum+=nums[j];
//                 maxSum = max(maxSum, sum);
//             }
//         }
//         return maxSum;
//     }
// };
