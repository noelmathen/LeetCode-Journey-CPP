class Solution {
public:
    string originalString(string x){
        string newString="";
        for(int i=0; i<x.size(); i++){
            if(x[i]=='#'){
                if(!newString.empty())
                    newString.pop_back();
                continue;
            }
            newString.push_back(x[i]);
        }
        return newString;
    }
    bool backspaceCompare(string s, string t) {
        if(originalString(s) == originalString(t)){
            return true;
        }
        return false;
    }
};