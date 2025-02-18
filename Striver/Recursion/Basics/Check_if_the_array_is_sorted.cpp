class Solution{	
	public:
		bool checkSort(vector<int> &nums, int i){
			if(i==nums.size()-1)
				return true;
			if(nums[i+1]<nums[i])
				return false;
			return checkSort(nums, i+1);
		}

		bool isSorted(vector<int>& nums){
			return checkSort(nums, 0);
		}
};