// //MY SOLUTION
// class Solution {
// public:
//     vector<string> result;

//     void getPar(string str, int n, int opening, int closing){
//         // cout<<opening<<" "<<closing<<endl;
//         int strSize = str.length();
//         if(strSize==1 && str[0]==')'){
//             closing--;
//             str.pop_back();
//             return;
//         }
//         if(strSize==2*n && str[strSize-1]=='('){
//             opening--;
//             str.pop_back();
//             return;
//         }
//         if(n-opening<0 || n-closing<0){
//             // cout<<"3rd condition became true"<<endl;
//             str[strSize-1]=='(' ? opening-- : closing--;
//             // cout<<"Before 3rd condition"<<endl;
//             // cout<<str<<endl;
//             str.pop_back();
//             // cout<<"After 3rd condition"<<endl;
//             // cout<<str<<endl;
//             return;
//         }
//         if(closing > opening){
//             str[strSize-1]=='(' ? opening-- : closing--;
//             str.pop_back();
//             return;
//         }
//         if(strSize==2*n && opening==closing){
//             // cout<<"Before 4th condition"<<endl;
//             // cout<<str<<endl;
//             result.push_back(str);
//             str[strSize-1]=='(' ? opening-- : closing--;
//             str.pop_back();
//             // cout<<"After 4th condition"<<endl;
//             // cout<<str<<endl;
//             return;
//         }
//         // cout<<str<<endl;
//         getPar(str+'(', n, opening+1, closing);
//         getPar(str+')', n, opening, closing+1);
//     }

//     vector<string> generateParenthesis(int n) {
//         getPar("", n, 0, 0);
//         return result;
//     }
// };


// BETTER SOLUTION
class Solution {
    public:
        void getPar(string str, int n, int opening, int closing, vector<string>& res){
            if(opening==closing && (opening+closing)==2*n){
                res.push_back(str);
                return;
            }
            if(opening<n)
                getPar(str+'(', n, opening+1, closing, res);
            if(closing<opening)
                getPar(str+')', n, opening, closing+1, res);
        }
    
        vector<string> generateParenthesis(int n) {
            vector<string> res;
            getPar("", n, 0, 0, res);
            return res;
        }
    };
    
    