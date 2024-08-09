#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int t, x;
    string sentence, word;
    stack<string> stk;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin, sentence);
        word.clear();
        for(int i=0; i<=sentence.size(); i++){
            if(i==sentence.size() || sentence[i]==' '){
                stk.push(word);
                word.clear();
            } else{
                word += sentence[i];
            }
        }
        while(!stk.empty()){
            cout<<stk.top()<<" ";
            stk.pop();
        }
        cout<<endl;
    }
    return 0;
}
