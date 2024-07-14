//OPTIMAL  SOLUTION
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(), l=0, r=0, num=0;
        unordered_map<char, int> mapp;
        while(r<n){
            mapp[s[r]]++;
            while(mapp['a']!=0 && mapp['b']!=0 && mapp['c']!=0){
                num+=n-r;
                mapp[s[l]]--;
                l++;
            }
            r++;
        }
        return num;
    }
};


// //BETTER  SOLUTION
// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int n=s.size(), l=0, r=0, num=0;
//         unordered_set<char> sett;
//         for(int i=0; i<n-2; i++){
//             sett.clear();
//             for(int j=i; j<n; j++){
//                 sett.insert(s[j]);
//                 if(sett.size()>=3 && sett.find('a')!=sett.end() && sett.find('b')!=sett.end() && sett.find('c')!=sett.end()){
//                     num=num+(n-j);
//                     break;
//                 }
//             }
//         }
//         return num;
//     }
// };



// //BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int n=s.size(), l=0, r=0, num=0;
//         unordered_set<char> sett;
//         for(int i=0; i<n-2; i++){
//             sett.clear();
//             for(int j=i; j<n; j++){
//                 sett.insert(s[j]);
//                 if(sett.size()<3)
//                     continue;
//                 if(sett.find('a')!=sett.end() && sett.find('b')!=sett.end() && sett.find('c')!=sett.end()){
//                     num++;
//                 }
//             }
//         }
        
//         return num;
//     }
// };