class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        for(int i=0; i<haystack.size(); i++){
            if(haystack.substr(i, n)==needle){
                return i;
            }
        }
        return -1;
    }
};


