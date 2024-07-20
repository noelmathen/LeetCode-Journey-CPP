//OPTIMAL SOLUTION
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(), total=0, sum=0;
        unordered_map<int, int> mapp;
        mapp[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(mapp.find(sum-k) != mapp.end()){
                total+=mapp[sum-k];
            }
            mapp[sum]++;
        }
        return total;
    }
};


// //BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n=nums.size(), total=0, sum=0;
//         for(int i=0; i<n; i++){
//             sum=0;
//             for(int j=i; j<n; j++){
//                 sum+=nums[j];
//                 if(sum==k)
//                     total++;
//             }
//         }
//         return total;
//     }
// };
