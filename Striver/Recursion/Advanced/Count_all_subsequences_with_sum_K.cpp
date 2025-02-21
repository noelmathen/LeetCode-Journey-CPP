class Solution{
    public:    	
    void countSub(int i, int sum, int &count, int k, vector<int> nums){
        if(sum==k){
            count++;
            return;
        }
        if(sum < 0 || i==nums.size())
            return;
        countSub(i+1, sum+nums[i], count, k, nums);
        countSub(i+1, sum, count, k, nums);
    }

    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	int count=0;
        countSub(0, 0, count, k, nums);
        return count;
    }
};