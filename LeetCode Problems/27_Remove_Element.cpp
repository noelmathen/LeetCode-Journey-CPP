// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
//         return nums.size();
//     }
// };

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==val){
//                 nums.erase(nums.begin()+i);
//                 i--;
//             }
//         }
//         return nums.size();
//     }
// };

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};

// Initialization:

// index = 0; initializes a variable index to 0. This variable keeps track of the position in the array where the next valid (not equal to val) element should be placed.
// Iteration:

// for (int i = 0; i < nums.size(); i++) { starts a loop that iterates through each element of the nums array.
// Conditional Check:

// if (nums[i] != val) { This condition checks if the current element nums[i] is not equal to val. If it's not, we have found a valid element that needs to be kept.
// Copy and Update:

// nums[index] = nums[i]; This line copies the current valid element (nums[i]) to the index position in the array. This effectively shifts the valid elements to the beginning.
// index++; The index variable is incremented to point to the next position where a valid element should be placed.