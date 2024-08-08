#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

int main(){
    int n;
    char x;
    unordered_set<char> sett;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        sett.insert(tolower(x));
    }
    if(sett.size()==26){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}
