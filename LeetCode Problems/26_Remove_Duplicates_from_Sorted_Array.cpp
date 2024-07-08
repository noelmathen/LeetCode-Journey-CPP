class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> newnums;
        for(auto it:nums){
            newnums.insert(it);
        }
        nums.clear();
        for(auto it:newnums){
            nums.push_back(it);
        }
        return nums.size();
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[index] != nums[i]){
                index++;
                nums[index]=nums[i];
            }
        }
        return index+1;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums.at(i)!=nums.at(i+1)){
                nums[++j]=nums.at(i+1);
            }
        }
        return j+1;
    }
};