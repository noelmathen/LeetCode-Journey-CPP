class Solution {
    public:
        void comSum(int i, int target, vector<int>& list, vector<vector<int>>& result, vector<int>& nums){
            if(target==0){
                result.push_back(list);
                return;
            }
            if(target<0 || i==nums.size())
                return;
            list.push_back(nums[i]);
            comSum(i, target-nums[i], list, result, nums);
            list.pop_back();
            comSum(i+1, target, list, result, nums);
        }
    
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> result;
            vector<int> list;
            comSum(0, target, list, result, candidates);
            return result;
        }
    };