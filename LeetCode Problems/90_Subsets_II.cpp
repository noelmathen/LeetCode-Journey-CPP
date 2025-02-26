class Solution {
    public:
        void subset2(int i, vector<int>& list, vector<vector<int>>& result, vector<int> nums){
            if(i==nums.size()){
                result.push_back(list);
                return;
            }
            list.push_back(nums[i]);
            subset2(i+1, list, result, nums);
            list.pop_back();
            while(i<nums.size()-1 && nums[i+1]==nums[i])
                i++;
            subset2(i+1, list, result, nums);
        }
    
        vector<vector<int> > subsetsWithDup(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            vector<vector<int>> result;
            vector<int> list;
            subset2(0, list, result, nums);
            return result;
        }
    };