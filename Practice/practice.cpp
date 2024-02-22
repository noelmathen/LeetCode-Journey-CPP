#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "My name is:  Biju%";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0; i<str.length(); i++){
        if(!iswalnum(str[i]) || str[i]==' '){
            str.erase(remove(str.begin(), str.end(), str[i]), str.end());
        }
    }
    cout<<str;
}
