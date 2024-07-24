class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int largest=LONG_MIN, secondLargest=LONG_MIN, thirdLargest=LONG_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>largest){
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = nums[i];
            }
            else if(nums[i]<largest && nums[i]>secondLargest){
                thirdLargest = secondLargest;
                secondLargest = nums[i];
            }
            else if(nums[i]<secondLargest && nums[i]>thirdLargest){
                thirdLargest =  nums[i];
            }
        }
        if (thirdLargest==LONG_MIN)
            return largest;
        return thirdLargest;
    }
};