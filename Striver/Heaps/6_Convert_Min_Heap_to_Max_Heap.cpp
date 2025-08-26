class Solution {
public:
    void heapifyDown(vector<int>& nums, int idx){
        int leftChild = 2*idx+1, rightChild = 2*idx+2, largest = idx, n=nums.size();
        
        if(leftChild<n && nums[leftChild]>nums[largest])
            largest = leftChild;
        if(rightChild<n && nums[rightChild]>nums[largest])
            largest = rightChild;
        
        if(largest != idx){
            swap(nums[largest], nums[idx]);
            heapifyDown(nums, largest);
        }
    }
    
    vector<int> minToMaxHeap(vector<int> nums) {
        int n = nums.size();
        for(int i=n-1; i>=0; i--){
            heapifyDown(nums, i);
        }
        for(auto x : nums)
            cout<<x<<" ";
        return nums;
    }
};