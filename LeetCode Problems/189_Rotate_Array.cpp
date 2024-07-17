//OPTIMAL SOLUTION
class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n; //to handle cases where k>n
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};



// // BETTER SOLUTION
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size(), lastElement;
//         while(k>0){
//             nums.insert(nums.begin(),  nums.back());
//             nums.pop_back();
//             //nums.shrink_to_fit();
//             k--;
//         }
//     }
// };

// // BRUTE FORCE SOLUTION
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size(), lastElement;
//         while(k>0){
//             lastElement = nums[n-1];
//             for(int i=n-1; i>0; i--){
//                 nums[i]=nums[i-1];
//             }
//             nums[0]=lastElement;
//             k--;
//         }
//     }
// };