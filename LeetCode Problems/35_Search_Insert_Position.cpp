//Insert position is the lower bound itself
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, position=nums.size(), mid;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid]>=target){
                high = mid-1;
                position = mid;
            }
            else
                low = mid+1;
        }
        return position;
    }
};


// //Finding lowerbound using C++ STL
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         return lower_bound(nums.begin(), nums.end(), target)-nums.begin();
//     }
// };


// class Solution {
// public:
//     int binary_search(vector<int>& nums, int low, int high, int target, int k){
//         if(low>high)
//             return k+1;
//         int mid = low+(high-low)/2;
//         if(nums[mid]==target)
//             return mid;
//         else if(target<nums[mid])
//             return binary_search(nums, low, mid-1, target, k);
//         return binary_search(nums, mid+1, high, target, mid);
//     }

//     int searchInsert(vector<int>& nums, int target) {
//         return binary_search(nums, 0, nums.size()-1, target, -1);
//     }
// };