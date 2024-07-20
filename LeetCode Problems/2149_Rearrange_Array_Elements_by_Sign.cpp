//Solution 1
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(), pIndex=0, nIndex=1;
        vector<int> result(n);
        for(auto num:nums){
            if(num>0){
                result[pIndex]=num;
                pIndex+=2;
            } else{
                result[nIndex]=num;
                nIndex+=2;
            }
        }
        return result;
    }
};