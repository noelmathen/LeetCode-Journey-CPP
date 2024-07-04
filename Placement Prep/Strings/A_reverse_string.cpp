#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    char temp;
    cin>>s;
    int j=s.size()-1;
    for(int i=0; i<j; i++){
        temp = s.at(i);
        s.at(i) = s.at(j);
        s.at(j) = temp;
        j--;
    }
    cout<<s<<endl;

    return 0;
}

// int main(){
//     string s;
//     char temp;
//     cin>>s;
//     reverse(s.begin(), s.end());
//     cout<<s<<endl;

//     return 0;
// }