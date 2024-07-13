class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCons=0, lastZero=-1;
        for(int i=0; i<=nums.size(); i++){
            if(i==nums.size() || nums.at(i)==0){
                maxCons = max(maxCons, i-lastZero-1);
                lastZero=i;
            }
        }
        return maxCons;
    }
};