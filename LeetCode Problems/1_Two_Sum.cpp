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


//solution 3: using maps itself but bit more dumb
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            map.insert({nums[i], i});
            auto found = map.find(target-nums[i]);
            if(found != map.end() && found->second != i){
                return {i, found->second};
            }
        }
        return {};
    }
};


