// //MY SOLUTION
// class Solution{
//     public:
//     void check(int i, int sum, vector<int>& nums, int k, bool &flag){
//         if(sum==k){
//             flag=true;
//             return;
//         }
//         if(i>=nums.size() || flag)
//             return;
//         check(i+1, sum+nums[i], nums, k, flag);
//         check(i+1, sum, nums, k, flag); // no need to do sum-nums[i] because we r doing sum+nums[i] inside the function parameter, not inside the function before the recursive call
//     }

//     bool checkSubsequenceSum(vector<int>& nums, int k) {
//         bool flag=false;
//         check(0, 0, nums, k, flag);
//         return flag;
//     }
// };


//OPTIMAL SOLUTION
class Solution{
    public:
    bool check(int i, int sum, int k, vector<int>& nums){
        if(sum==0)
            return true;
        if(sum<0 || i==nums.size())
            return false;
        bool path1 = check(i+1, sum-nums[i], k, nums); //taking the element
        bool path2 = check(i+1, sum, k, nums); // not taking the element
        return path1 || path2; //if any oneof them is true, it will return true, if both of them are false, it will be false;
    }

    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return check(0, 0, k, nums);
    }
};
