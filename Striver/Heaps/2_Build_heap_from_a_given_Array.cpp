class Solution {
public:
    void buildMinHeap(vector<int> &nums) {
        int n=nums.size();
        for(int i=(n/2)-1; i>=0; i--){
            int leftChild = 2*i+1, rightChild = 2*i+2;
            int smallest=i;
            int idx = i;
            while((leftChild<n && nums[leftChild] < nums[smallest]) || (rightChild<n && nums[rightChild] < nums[smallest])){
                if(leftChild<n && nums[leftChild] < nums[smallest])
                    smallest = leftChild;
                if(rightChild<n && nums[rightChild] < nums[smallest])
                    smallest = rightChild;
                
                
                if(smallest != idx){
                    swap(nums[smallest], nums[idx]);
                    idx=smallest;
                    leftChild = 2*idx+1;
                    rightChild = 2*idx+2;
                }
            }
        }
    }
};



// // BRUTE FORCE SOLUTION - SORT THE ARRAY
// class Solution {
// public:
//     void buildMinHeap(vector<int> &nums) {
//         sort(nums.begin(), nums.end());
//     }
// };