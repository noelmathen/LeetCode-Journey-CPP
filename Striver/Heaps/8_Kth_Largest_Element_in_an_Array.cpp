//OPTIMAL SOLUTION - Quick Select Parition Algorithm - O(n)
class Solution {
public:
    int partitionAndReturnIndex(vector<int>& nums, int pIndex, int left, int right){
        int index = left+1;
        swap(nums[left], nums[pIndex]);
        for(int i=left+1; i<=right; i++){
            if(nums[i] > nums[left]){
                swap(nums[index], nums[i]);
                index++;
            }
        }
        swap(nums[left], nums[index-1]);
        return index-1;
    }

    int kthLargestElement(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0, right=n-1;
        
        while(1){
            int pIndex = (rand() % (right-left+1)) + left;
            pIndex = partitionAndReturnIndex(nums, pIndex, left, right);
            
            if(pIndex==k-1)
                return nums[pIndex];
            else if(pIndex > k-1)
                right = pIndex-1;
            else
                left = pIndex+1;
        }
        return -1;
    }
};


// BETTER Solution - K*log(N)
// class Solution {
// public:
//     void heapifyDown(vector<int>& nums, int i){
//         int leftChild=2*i+1, rightChild=2*i+2, n=nums.size(), largest=i;

//         if(leftChild<n && nums[leftChild] > nums[largest])
//             largest = leftChild;
//         if(rightChild<n && nums[rightChild] > nums[largest])
//             largest = rightChild;

//         if(largest != i){
//             swap(nums[largest], nums[i]);
//             heapifyDown(nums, largest);
//         }
//     }

//     void getRootElement(vector<int>& nums){
//         swap(nums[0], nums[nums.size()-1]);
//         nums.pop_back();
//         heapifyDown(nums, 0);
//     }

//     void buildMaxHeap(vector<int>& nums){
//         for(int i=(nums.size()/2)-1; i>=0; i--){
//             heapifyDown(nums, i);
//         }
//     }

//     int kthLargestElement(vector<int>& nums, int k) {
//         buildMaxHeap(nums);

//         for(int i=0; i<k-1; i++){
//             getRootElement(nums);
//         }
//         return nums[0];
//     }
// };