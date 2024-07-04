#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    char temp;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(i%2!=0)
            cout<<s.at(i);
    }
    for(int i=0; i<s.size(); i++){
        if(i%2==0)
            cout<<s.at(i);
    }

    return 0;
}

