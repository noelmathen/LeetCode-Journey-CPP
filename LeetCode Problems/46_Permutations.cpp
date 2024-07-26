//Solution with extra space
class Solution {
public:
    void permutations(vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds, vector<int>& visited){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(!visited[i]){
                visited[i]=1;
                ds.push_back(nums[i]);
                permutations(nums, ans, ds, visited);
                visited[i]=0;
                ds.pop_back();
            }
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> visited(nums.size(), 0);
        permutations(nums, ans, ds, visited);
        return ans;
    }
};


// //Solution without extra space
// class Solution {
// public:
//     void permutations(vector<int>& nums, vector<vector<int>>& ans, int index){
//         if(index==nums.size()){
//             ans.push_back(nums);
//             return;
//         }

//         for(int i=index; i<nums.size(); i++){
//             swap(nums[index], nums[i]);
//             permutations(nums, ans, index+1);
//             swap(nums[index], nums[i]);
//         }

//     }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         permutations(nums, ans, 0);
//         return ans;
//     }
// };
