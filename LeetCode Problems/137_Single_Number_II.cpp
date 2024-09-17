//n TC. optimal(whatever the hell this solution is.......)
// https://takeuforward.org/plus/data-structures-and-algorithm/bit-manipulation/problems/single-number---ii/editorial
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0, twos=0;
        for(auto x : nums){
            ones = (ones ^ x) & ~twos;
            twos = (twos ^ x) & ~ones;
        }
        return ones;
    }
};

// //nlogn TC. not optimal
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i=1; i<nums.size()-1; i+=3){
//             if(nums[i-1] != nums[i])
//                 return nums[i-1];
//         }
//         return nums[nums.size()-1];
//     }
// };