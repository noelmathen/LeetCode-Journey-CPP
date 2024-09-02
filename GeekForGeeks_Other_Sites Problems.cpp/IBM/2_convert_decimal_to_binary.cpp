#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int a, b, c;
    vector<int> bin;
    cin>>a;
    while(a>0){
        bin.push_back(a%2);
        a /= 2;
    }
    for(int i=bin.size()-1; i>=0; i--){
        cout<<bin[i];
    }
    return 0;
}