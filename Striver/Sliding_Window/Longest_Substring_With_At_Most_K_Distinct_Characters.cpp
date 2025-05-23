class Solution {
public:
    int kDistinctChar(string& s, int k) {
        int n=s.size(), l=0, r=0, maxLen=0;
        unordered_map<char, int> mapp;
        while(r<n){
            mapp[s[r]]++;
            if(mapp.size() > k){
                mapp[s[l]]--;
                if(mapp[s[l]]==0)
                    mapp.erase(s[l]);
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};