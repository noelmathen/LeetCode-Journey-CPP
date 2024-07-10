class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end()), set2(nums2.begin(), nums2.end());
        vector<int> result;
        for(auto i:set1){
            if(set2.find(i)!=set2.end()) 
                result.push_back(i);
        }
        return result;
    }
};