class Solution {
   public:
    void heapifyUp(vector<int> &nums, int ind){
        int parent = (ind-1)/2;
        if(ind > 0 && nums[parent]>nums[ind]){
            swap(nums[ind], nums[parent]);
            heapifyUp(nums, parent);
        }
    }

    void heapifyDown(vector<int> &nums, int ind){
        int leftChild = 2*ind+1, rightChild=2*ind+2, n=nums.size();
        int smallest=ind;

        if(leftChild<n && nums[leftChild]<nums[smallest])
            smallest = leftChild;
        if(rightChild<n && nums[rightChild]<nums[smallest])
            smallest = rightChild;
        if(smallest != ind){
            swap(nums[smallest], nums[ind]);
            heapifyDown(nums, smallest);
        }
    }

    void heapify(vector<int> &nums, int ind, int val) {

        if(val==nums[ind]) 
            return;
        
        if(val < nums[ind]){
            nums[ind] = val;
            heapifyUp(nums, ind);
        }
        else{
            nums[ind] = val;
            heapifyDown(nums, ind);
        }
    }
};