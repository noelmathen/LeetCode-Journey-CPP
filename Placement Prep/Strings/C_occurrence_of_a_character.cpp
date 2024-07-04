#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    char ch;
    int count=0;
    getline(cin, s);
    cin>>ch;
    for(int i=0; i<s.size(); i++){
        if(s.at(i)==ch)
            count++;
    }
    cout<<count;
    return 0;
}


// int main(){
//     string s;
//     char ch;
//     getline(cin, s);
//     cin>>ch;
//     cout<<count(s.begin(), s.end(), ch);
//     return 0;
// }

