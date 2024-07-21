//Optimal Solution
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        return (s+s).find(goal)!=string::npos;
    }
};

// //Brute force solution
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         int n=s.size(), times=1;
//         if(s==goal)
//             return true;
//         while(times<=n-1){
//             s+=s[0];
//             s.erase(0, 1);
//             times++;
//             if(s==goal)
//                 return true;
//         }
//         return false;
//     }
// };