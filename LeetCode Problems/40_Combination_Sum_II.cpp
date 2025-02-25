class Solution {
    public:
        void comSum2(int i, int target, vector<int>& list, vector<vector<int>>& result, vector<int>& nums){
            if(target==0){
                result.push_back(list);
                return;
            }
            if(target<0 || i==nums.size())
                return;
            list.push_back(nums[i]);
            comSum2(i+1, target-nums[i], list, result, nums);
            list.pop_back();
            while(i<nums.size()-1 && nums[i+1]==nums[i])
                i++;
            comSum2(i+1, target, list, result, nums);
        }
    
        vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(), candidates.end());
            vector<vector<int>> result;
            vector<int> list;
            comSum2(0, target, list, result, candidates);
            return result;
        }
    };