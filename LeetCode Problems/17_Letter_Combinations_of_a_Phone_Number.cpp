class Solution {
    public:
        void letterComb(int i, string digits, vector<string>& combos, string str, vector<string>& result){
            if(i==digits.size()){
                result.push_back(str);
                return;
            }
            int number = digits[i]-'0'; //to convert character to int
            for(int j=0; j<combos[number].size(); j++){
                letterComb(i+1, digits, combos, str+combos[number][j], result);
            }
        }
    
        vector<string> letterCombinations(string digits) {
            vector<string> combos = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
            string str="";
            vector<string> result;
            letterComb(0, digits, combos, str, result);
            if(digits.empty())
                return {};
            return result;
        }
    };