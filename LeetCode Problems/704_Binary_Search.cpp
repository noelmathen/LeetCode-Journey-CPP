// RECURSIVE APPROACH
class Solution {
public:
    int binary_search(vector<int>& nums, int low, int high, int target){
        if(low>high)
            return -1;

        int mid = low + (high-low)/2;
        if(nums[mid]==target)
            return mid;
        else if(target<nums[mid])
            return binary_search(nums, low, mid-1, target);
        return binary_search(nums, mid+1, high, target);
    }

    int search(vector<int>& nums, int target) {
        return binary_search(nums, 0, nums.size()-1, target);
    }
};


// // ITERATIVE APPROACH
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int low=0, high=nums.size()-1, mid;
//         while(low<=high){
//             mid = low + (high-low)/2;
//             if(nums[mid] == target)
//                 return mid;
//             else if(target <= nums[mid])
//                 high = mid-1;
//             else
//                 low = mid+1;
//         }
//         return -1;
//     }
// };