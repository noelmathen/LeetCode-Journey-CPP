class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size(), sum=0, totalSum=0;
        // for(int i=0; i<n; i++){
        //     sum+=nums[i];
        // }
        // totalSum = (n*(n+1))/2;

        int n=nums.size();
        return ((n*(n+1))/2) - accumulate(nums.begin(), nums.end(), 0);
    }
};
