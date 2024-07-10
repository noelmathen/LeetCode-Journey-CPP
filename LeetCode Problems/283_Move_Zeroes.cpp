//leetcode code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
};


//My code
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int temp;
//         for(int i=0; i<nums.size()-1; i++){
//             if(nums.at(i)!=0)
//                 continue;
//             for(int j=i+1; j<nums.size(); j++){
//                 if( nums.at(j)==0)
//                     continue;
//                 swap(nums[i], nums[j]);
//                 break;
//             }
//         }
//     }
// };


//chatgpt code
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int nonZeroIndex = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 nums[nonZeroIndex++] = nums[i];
//             }
//         }
//         for (int i = nonZeroIndex; i < nums.size(); i++) {
//             nums[i] = 0;
//         }
//     }
// };