#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool is_vowel(char x){
    string str = "aeiouAEIOU";
    return str.find(x) != string::npos;
}

int main(){
    string s;
    int vowel=0, consonant=0;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(is_vowel(s.at(i)))
            vowel++;
        else
            consonant++;
    }
    cout<<vowel<<" "<<consonant<<endl;
    return 0;
}

