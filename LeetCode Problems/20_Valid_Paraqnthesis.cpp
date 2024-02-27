// #include<stack>
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<int> temp;
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == '(' || s[i] == '{' || s[i] == '[')
//                 temp.push(s[i]);
//             else if((!temp.empty() && temp.top()=='(' && s[i]==')') || (!temp.empty() && temp.top()=='{' && s[i]=='}') || (!temp.empty() && temp.top()=='[' && s[i]==']'))
//                 temp.pop();
//             else
//                 return false;
//         }
//         if(!temp.empty())
//             return false;
//         return true;
//         }
// };


// #include<stack>
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<int> temp;
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == '(' || s[i] == '{' || s[i] == '[')
//                 temp.push(s[i]);
//             else if(!temp.empty() && ((temp.top()=='(' && s[i]==')') || (temp.top()=='{' && s[i]=='}') || (temp.top()=='[' && s[i]==']')))
//                 temp.pop();
//             else
//                 return false;
//         }
//         return temp.empty();
//     }
// };

#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stk.push(s[i]);
                continue;
            }
            else if(!stk.empty() && 
                    (   (s[i]==')'&&stk.top()=='(') || 
                        (s[i]==']'&&stk.top()=='[') || 
                        (s[i]=='}'&&stk.top()=='{')
                    )){
                        stk.pop();
            }
            else
                stk.push(s[i]);
        }
        if(stk.empty())
            return true;
        return false;
    }
};