#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    int maxLength = 0, j=n;

    for(int i=0; i<n-1 && (--j)>0; i++){
        if(s.substr(0, i+1) == s.substr(j, i+1)){
            maxLength=i+1;
        }
    }
    cout<<maxLength<<endl;
}




// int main() {
//     string s;
//     getline(cin, s);

//     int n = s.size();
//     int maxLength = 0;

//     for (int len = 1; len < n; len++) {
//         bool match = true;
//         for (int i = 0; i < len; i++) {
//             if (s[i] != s[n - len + i]) {
//                 match = false;
//                 break;
//             }
//         }
//         if (match) {
//             maxLength = len;
//         }
//     }

//     cout << maxLength << endl;
//     return 0;
// }








// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s;
//     getline(cin, s);
//     int count=0, j;
//     j=s.rfind(s[0]);
//     if(j==0){
//         cout<<0;
//         return 0;
//     }
//     bool sameChar=true;
//     for(int i=0; i<s.size()-1; i++){
//         if(s[i]!=s[i+1]){
//             sameChar=false;
//             break;
//         }
//     }
//     if(sameChar){
//         cout<<s.size()-1<<endl;
//         return 0;
//     }
//     for(int i=0; i<s.size(); i++){
//         if(j<s.size() &&  s.at(i)==s.at(j)){
//             count++;
//             j++;
//             continue;
//         }
//         else{
//             break;
//         }
//     }
//     if(j!=s.size()){
//         cout<<0<<endl;
//         return 0;
//     }
//     cout<<count<<endl;
//     return 0;
// }
