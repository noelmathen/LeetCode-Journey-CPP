#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    string str1;
    cin>>t;
    while(t--){
        unordered_map<char, int> mapp1;
        cin>>str1;
        bool broken=false;
        for(int i=0; i<str1.size(); i++){
            mapp1[str1[i]]++;
        }
        for(auto x:str1){
            if(mapp1[x]>=2){
                cout<<x<<endl;
                broken=true;
                break;
            }
        }
        if(!broken)
            cout<<"."<<endl;
    }
    return 0;
}
