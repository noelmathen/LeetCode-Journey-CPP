class Solution {
public:
    int findFirstPos(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid, lb=nums.size();
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]>=target){
                high = mid-1;
                lb = mid;
            }
            else{
                low = mid+1;
            }
        }
        return lb;
    }

    int findLastPos(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid, ub=nums.size();
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]>target){
                high = mid-1;
                ub = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ub-1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = findFirstPos(nums, target);
        if(firstPos==nums.size() || nums[firstPos]!=target)  //lower bound might sometimes point to the 'n' if the element is out of bounds, or the lowerbound element may not be the given target. In both these cases, target is not present in array, so return -1, -1;
            return {-1, -1};
        int lastPos = findLastPos(nums, target);
        return {firstPos, lastPos};
    }
};


// //Using the lower_bound and upper_bound functions
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int firstPos = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
//         if(firstPos==nums.size() || nums[firstPos]!=target)  //lower bound might sometimes point to the 'n' if the element is out of bounds, or the lowerbound element may not be the given target. In both these cases, target is not present in array, so return -1, -1;
//             return {-1, -1};
//         int lastPos = (upper_bound(nums.begin(), nums.end(), target)-nums.begin())-1;
//         return {firstPos, lastPos};
//     }
// };
