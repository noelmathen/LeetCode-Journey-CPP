class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long XORR = 0;
        for(auto x : nums){
            XORR ^= x;
        }
        int rightMost = (XORR & (XORR-1)) ^ XORR, b1=0, b2=0;
        for(auto x : nums){
            (x & rightMost) ? (b1 ^= x) : (b2 ^= x);
        }
        return {b1, b2};
    }
};