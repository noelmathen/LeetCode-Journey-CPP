// //MY SOLUTION
// class Solution {
// public:
//     void comSum3(int i, int sum, vector<int>& list, vector<vector<int>>& result, vector<int>& nums, int k){
//         if(sum==0 && list.size()==k){
//             result.push_back(list);
//             return;
//         }
//         if(sum<0 || i==nums.size())
//             return;
//         list.push_back(nums[i]);
//         comSum3(i+1, sum-nums[i], list, result, nums, k);
//         list.pop_back();
//         comSum3(i+1, sum, list, result, nums, k);
//     }

//     vector<vector<int> > combinationSum3(int k, int n) {
//         vector<int> nums(9);
//         iota(nums.begin(), nums.end(), 1);
//         vector<int> list;
//         vector<vector<int>> result;
//         comSum3(0, n, list, result, nums, k);
//     	return result;
//     }
// };


//OPTIMAL SOLUTION
class Solution {
    public:
        void comSum3(int i, int sum, vector<int>& list, vector<vector<int>>& result, int k){
            if(sum==0 && list.size()==k){
                result.push_back(list);
                return;
            }
            if(sum<0 || i>9)
                return;
            list.push_back(i);
            comSum3(i+1, sum-i, list, result, k);
            list.pop_back();
            comSum3(i+1, sum, list, result, k);
        }
    
        vector<vector<int> > combinationSum3(int k, int n) {
            vector<int> list;
            vector<vector<int>> result;
            comSum3(1, n, list, result, k);
            return result;
        }
    };
    