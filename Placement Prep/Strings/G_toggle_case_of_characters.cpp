#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for(int i=0; i<s.size(); i++){
        islower(s[i]) ? s[i]=toupper(s[i]) : s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
    return 0;
}



// int main(){
//     string s, small="abcdefghijklmnopqrstuvwxyz";
//     getline(cin, s);
    
//     for(int i=0; i<s.size(); i++){
//         small.find(s[i])!=string::npos ? s[i]=toupper(s[i]) : s[i]=tolower(s[i]);
//     }
//     cout<<s<<endl;
//     return 0;
// }
