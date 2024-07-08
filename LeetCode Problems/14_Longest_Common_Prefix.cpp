class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        for(int i=0; i<strs[0].size(); i++){
            for(auto s : strs){
                if(i==s.size() || s[i]!=strs[0][i]){
                    return prefix;
                }
            }
            prefix+=strs[0][i];
        }
        return prefix;
    }
};
