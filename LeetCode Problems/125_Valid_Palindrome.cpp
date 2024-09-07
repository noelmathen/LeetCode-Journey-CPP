//Optimal Solution
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(tolower(s[i++]) != tolower(s[j--]))
                return false;
        }
        return true;
    }
};

// //Better Solution
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string newStr="";
//         for(int i=0; i<s.size(); i++){
//             if(isalnum(s[i]))
//                 newStr += tolower(s[i]);
//         }
//         cout<<newStr<<endl;
//         int j=newStr.size()-1;
//         for(int i=0; i<newStr.size()/2; i++){
//             if(newStr[i]!=newStr[j])
//                 return false;
//             j--;
//         }
//         return true;
//     }
// };

// //Stupid solution
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         transform(s.begin(), s.end(), s.begin(), ::tolower);    //converting to lowercase
//         s.erase(remove(s.begin(), s.end(), ' '), s.end());      //removing spaces
//         s.erase(remove_if(s.begin(), s.end(), [](char c) {return !isalnum(c) && !isspace(c);}), s.end());   //removing alnum
//         int j=s.size()-1;
//         for(int i=0; i<s.size(); i++){
//             if(s[i]!=s[j])
//                 return false;
//             j--;
//             if(i==j || ((i+j==s.size()-1) && (s[i]==s[j])))
//                 return true;
//         }
//         return true;
//     }
// };
