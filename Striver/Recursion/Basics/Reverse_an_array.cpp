class Solution{	
	public:
		void rev(vector<int> &nums, int l, int r){
			if(l>r)
				return;
			swap(nums[l], nums[r]);
			rev(nums, l+1, r-1);
		}

		vector<int> reverseArray(vector<int>& nums){			
			rev(nums, 0, nums.size()-1);
			return nums;
		}
};