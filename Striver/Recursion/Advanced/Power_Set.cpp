class Solution {
    public:	
        void findPowerSet(int i, vector<int>& list, vector<vector<int>>& result, vector<int>& nums){
            if(i==nums.size()){
                result.push_back(list);
                return;
            }
            list.push_back(nums[i]);
            findPowerSet(i+1, list, result, nums);
            list.pop_back();
            findPowerSet(i+1, list, result, nums);
        }
    
        vector<vector<int> > powerSet(vector<int>& nums) {
            vector<vector<int>> result;
            vector<int> list;
            findPowerSet(0, list, result, nums);
            return result;
        }
};
