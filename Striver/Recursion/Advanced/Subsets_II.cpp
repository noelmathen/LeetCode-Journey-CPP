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
// Time Complexity: O(2^n)
// Space Complexity: O(2^n)
// Note: This is a recursive approach to solve the problem. The code is self-explanatory. The only thing to note is that we are using a while loop to skip the duplicates. This is because we are not allowed to use the same element more than once in the same subset. So, we skip the duplicates and move to the next element. This is the only difference between this code and the code of the previous problem. The rest of the code is the same. The time complexity and space complexity are also the same. So, this is the solution to the problem.

