//if (even,odd) -> then single element is to the right
//if (odd,even) -> then single element is to the left

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0, n=nums.size(), high=n-1, mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums.size()==1)
                return nums[0];
            if(nums[0]!=nums[1])
                return nums[0];
            if(nums[n-1]!=nums[n-2])
                return nums[n-1];
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])
                return nums[mid];
            if((nums[mid-1]==nums[mid] && mid%2==1) || (nums[mid+1]==nums[mid] && mid%2==0))
                low = mid+1;
            else
                high = mid-1;
        }
        return -1;
    }
};