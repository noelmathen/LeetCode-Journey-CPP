class Solution {
public:
    bool isHeap(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return true;
        for(int i=0; i<n/2; i++){
            int leftChild = 2*i+1;
            int rightChild = 2*i+2;
            if((leftChild<n && nums[leftChild] < nums[i]) || (rightChild<n && nums[rightChild]< nums[i]))
                return false;
        }
        return true;
    }
};