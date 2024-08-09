#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int t, x;
    string command;
    stack<int> stk;
    cin>>t;
    while(t--){
        cin>>command;
        if(command=="pop"){
            if(stk.empty()){
                cout<<"Empty"<<endl;
            } else{
                cout<<stk.top()<<endl;
                stk.pop();
            }
            continue;
        }
        cin>>x;
        stk.push(x);
        
    }
    return 0;
}