class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s.at(i)==' '){
                if(length>0)
                    break;
                continue;
            }
            length++;
        }
        return length;
    }
};