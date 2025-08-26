class Solution {
public:
    void heapifyDown(vector<int>& nums, int i){
        int leftChild = 2*i+1, rightChild=2*i+2, n=nums.size(), largest=i;
        if(leftChild<n && nums[leftChild] > nums[largest])
            largest = leftChild;
        if(rightChild<n && nums[rightChild] > nums[largest])
            largest = rightChild;
        if(largest!=i){
            swap(nums[i], nums[largest]);
            heapifyDown(nums, largest);
        } 
    }

    void heapifyDownWithLimit(vector<int>& nums, int i, int last){
        int leftChild = 2*i+1, rightChild=2*i+2, n=nums.size(), largest=i;
        if(leftChild<=last && leftChild<n && nums[leftChild] > nums[largest])
            largest = leftChild;
        if(rightChild<=last && rightChild<n && nums[rightChild] > nums[largest])
            largest = rightChild;
        if(largest!=i){
            swap(nums[i], nums[largest]);
            heapifyDownWithLimit(nums, largest, last);
        } 
    }

    void buildMaxHeap(vector<int>& nums){
        int n = nums.size();
        for(int i=(n/2)-1; i>=0; i--){
            heapifyDown(nums, i);
        }
    }

    void performSort(vector<int>& nums){
        int n=nums.size();
        int last = n-1;
        while(last>0){
            swap(nums[0], nums[last]);
            last--;
            if(last>0)
                heapifyDownWithLimit(nums, 0, last);
        }
    }

    void heapSort(vector<int>&nums) {
        int n = nums.size();
        if(n==1)
            return;

        buildMaxHeap(nums);
        performSort(nums);
    }
};