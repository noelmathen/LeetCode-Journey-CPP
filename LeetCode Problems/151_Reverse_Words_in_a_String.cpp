//my code
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(), count=0, i=n-1;
        string newStr="";
        while(i>=0){
            while(i>=0 && s[i]==' ')
                i--;
            count=0;
            while(i>=0 && s[i]!=' '){
                count++;
                i--;
            }
            newStr+=s.substr(i+1, count);
            newStr+=' ';
        }
        i=newStr.size()-1;
        while(newStr[i]==' '){
            newStr.erase(i);
            i--;
        }
        return newStr;
    }
};


// //Optimal code //from chatgpt //DID NOT UNDERSTAND
// //more optimal solution:
// // 1. Reverse the entire string
// // 2. remove leading and trailing spaces
// // 3. Reverse each word one by one
// // 4. leave only single space between words
// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.size();
//         reverse(s.begin(), s.end()); // Step 1: Reverse the entire string

//         int start = 0, end = 0;
//         while (end < n) {
//             while (end < n && s[end] == ' ') end++; // Skip spaces
//             if (end >= n) break;
//             if (start > 0) s[start++] = ' '; // Add a single space between words
//             int wordStart = start;
//             while (end < n && s[end] != ' ') s[start++] = s[end++]; // Move the word to the front
//             reverse(s.begin() + wordStart, s.begin() + start); // Reverse the word back to its original order
//         }
//         s.resize(start); // Resize the string to remove extra spaces
//         return s;
//     }
// };




