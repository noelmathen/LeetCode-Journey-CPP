class Solution {
public:
    bool check(vector<int>& nums) {
        int breakPoint=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]<nums[i])
                breakPoint++;
        }
        if(nums[0]<nums[nums.size()-1])
            breakPoint++;
        return breakPoint<=1;
    }
};
