class Solution{
  public:
    int totalFruits(vector<int>& fruits){
        int n=fruits.size(), l=0, r=0, maxLen=INT_MIN;
        unordered_map<int, int> mapp;
        while(r<n){
            mapp[fruits[r]]++;
            if(mapp.size()>2){
                mapp[fruits[l]]--;
                if(mapp[fruits[l]] == 0)
                    mapp.erase(fruits[l]);
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};