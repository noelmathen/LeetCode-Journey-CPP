//Optimal solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        int countOfChars[26]={0};
        if(s.length()!=t.length())
            return false;
        
        for(int i=0; i<s.size(); i++){
            countOfChars[s[i]-'a']++;
            countOfChars[t[i]-'a']--;
        }
        for(int count : countOfChars){
            if(count!=0)
                return false;
        }
        return true;
    }
};


// //First solution
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         map<char, int> sMap, tMap;
//         if(s.length()!=t.length())
//             return false;
//         for(int i=0; i<s.size(); i++){
//             sMap[s[i]]++;
//             tMap[t[i]]++;
//         }
//         return sMap==tMap;
//     }
// };
