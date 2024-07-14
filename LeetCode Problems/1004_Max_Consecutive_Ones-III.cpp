//OPTIMAL SOLUTION
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(), zeros=0, maxNumber=0, r=0, l=0;
        while(r<n){
            if(nums[r]==0)
                zeros++;
            if(zeros>k){
                if(nums[l]==0)
                    zeros--;
                l++;
            }
            if(zeros<=k){
                maxNumber = max(maxNumber, r-l+1);
            }
            r++;
        }
        return maxNumber;
    }
};


//BETTER SOLUTION
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n=nums.size(), zeros=0, maxNumber=0, r=0, l=0;
//         while(r<n){
//             if(nums[r]==0)
//                 zeros++;
//             while(zeros>k){
//                 if(nums[l]==0)
//                     zeros--;
//                 l++;
//             }
//             maxNumber = max(maxNumber, r-l+1);
//             r++;
//         }
//         return maxNumber;
//     }
// };


//BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n=nums.size(), zeros=0, maxNumber=0;
//         for(int i=0; i<n; i++){
//             zeros=0;
//             for(int j=i; j<n; j++){
//                 if(nums[j]==0)
//                     zeros++;
//                 if(zeros>k)
//                     break;
//                 maxNumber = max(maxNumber, j-i+1);
//             }
//         }
//         return maxNumber;
//     }
// };