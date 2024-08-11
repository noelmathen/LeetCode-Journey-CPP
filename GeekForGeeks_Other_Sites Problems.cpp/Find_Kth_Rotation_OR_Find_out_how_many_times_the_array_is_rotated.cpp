class Solution {
public:
    int findKRotation(vector<int>& nums) {
        int low=0, n=nums.size(), high=n-1, mid;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[low] <= nums[mid] && nums[mid] <= nums[high])
                return low;
            if(nums[low] <= nums[mid])
                low = mid + 1;
            else
                high = mid;
        }
        return mid;
    }
};