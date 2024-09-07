//Optimal SOlution - Machanes Algorithm
//Cannot udnerstand with current brain capacity!

//Better solution
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string resStr = "";
        int maxLen = 0, l, r;
        for(int i=0; i<n; i++){
            l=i, r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    resStr = s.substr(l, r-l+1);
                }
                l--;
                r++;
            }

            l=i, r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    resStr = s.substr(l, r-l+1);
                }
                l--;
                r++;
            }
        }
        return resStr;
    }
};

//Brute force solution
//generate all substrings and check for the longest palindrome! time limit will exceed