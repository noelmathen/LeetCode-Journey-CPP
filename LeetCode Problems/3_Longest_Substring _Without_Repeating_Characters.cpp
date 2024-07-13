class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, maxLength=0;
        unordered_map<char, int> mapp;
        
        while(r<s.size()){
            if(mapp.find(s[r])!=mapp.end() && mapp[s[r]]>=l){
                l = mapp[s[r]]+1;
            }
            maxLength = max(maxLength, r-l+1);
            mapp[s[r]]=r;
            r++;
        }
        return maxLength;
    }
};
