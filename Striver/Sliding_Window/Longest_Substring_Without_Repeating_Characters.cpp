class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
        unordered_map<char, int> mapp;
        int n=s.size(), l=0, r=0, maxLen=INT_MIN, sum=0;
        while(r<n){
            if(mapp.find(s[r])!=mapp.end() && mapp[s[r]]>=l){
                l = mapp[s[r]] + 1;
            }
            mapp[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};
