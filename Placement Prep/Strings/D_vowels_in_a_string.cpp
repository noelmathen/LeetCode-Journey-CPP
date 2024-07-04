#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    char ch;
    bool isVowel=true;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.size(); i++){
        if( s.at(i)!='a' && s.at(i)!='e' && s.at(i)!='i' && s.at(i)!='o' && s.at(i)!='u')
        {    
            isVowel=false; 
            break;
        }  
    }
    if(isVowel)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}


// bool isVowel(char ch) {
//     ch = tolower(ch);  // Convert the character to lowercase for uniformity
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// int main() {
//     string s;
//     cin >> s;
    
//     for (char ch : s) {
//         if (!isVowel(ch)) {
//             cout << "No" << endl;
//             return 0;
//         }
//     }
    
//     cout << "Yes" << endl;
//     return 0;
// }