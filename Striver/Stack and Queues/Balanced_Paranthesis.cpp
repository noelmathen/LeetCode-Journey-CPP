class Solution {
public:
    bool isValid(string str) {
       stack<int> stk;
       for(int i=0; i<str.size(); i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                stk.push(str[i]);
                continue;
            }
            if(str[i]==')' && (!stk.empty() && stk.top()=='('))
                stk.pop();
            else if(str[i]=='}' && (!stk.empty() && stk.top()=='{'))
                stk.pop();
            else if(str[i]==']' && (!stk.empty() && stk.top()=='['))
                stk.pop();
            else
                stk.push(str[i]);
       }
       return stk.empty();
    }
};