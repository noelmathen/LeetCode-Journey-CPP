//My solution
class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mapp;
        string result="";
        multimap<int, char, greater<int>> multimapp;
        for(auto i: s){
            mapp[i]++;
        }
        for(auto x : mapp){
            multimapp.insert({x.second, x.first});
        }
        for(auto y : multimapp){
            for(int i=1; i<=y.first; i++){
                result+=y.second;
            }
        }
        return result;
    }
};
 