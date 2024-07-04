#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// int main(){
//     string s;
//     char ch;
//     bool isVowel=true;
//     getline(cin, s);
//     for(int i=0; i<s.size(); i++){
//          if(!isdigit(s.at(i))){
//             cout<<"No"<<endl;
//             return  0;
//          }
//     }
//     cout<<"Yes"<<endl;

//     return 0;
// }

int main(){
    string s;
    char ch;
    getline(cin, s);
    if(all_of(s.begin(), s.end(), ::isdigit))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
