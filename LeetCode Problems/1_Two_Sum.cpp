// Solution 1(brute force):
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return{i, j};
                }
            }
        }
        return{};
    }
};

// Solution 2(Hash Maps):
#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(target-nums[i]) != mp.end())
                return {i, mp[target-nums[i]]};
            else
                mp[nums[i]] = i;
        }
        return {};
    }
};

