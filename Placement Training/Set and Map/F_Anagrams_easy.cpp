#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    int t;
    string str1, str2;
    bool isAnagram;
    cin>>t;
    while(t--){
        map<char, int> mapp1;
        isAnagram=true;
        cin>>str1>>str2;
        if(str1.size()!=str2.size()){
            cout<<"False"<<endl;
            continue;
        }
        for(int i=0; i<str1.size(); i++){
            mapp1[str1[i]]++;
            mapp1[str2[i]]--;
        }
        for(auto x:mapp1){
            if(x.second!=0){
                isAnagram=false;
                break;
            }
        }
        if(isAnagram)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
    return 0;
}
