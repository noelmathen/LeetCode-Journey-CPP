#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int t, x, n;
    char command;
    cin>>t;
    for(int i=1; i<=t; i++){
        stack<int> stk, maxStk;

        cout<<"Case "<<i<<":"<<endl;
        cin>>n;
        while(n--){
            cin>>command;
            if(command=='R'){
                if(!stk.empty()){
                    stk.pop();
                    maxStk.pop();
                }
            } else if(command=='Q'){
                if(maxStk.empty()){
                    cout<<"Empty"<<endl;
                    continue;
                }
                cout<<maxStk.top()<<endl;
            } else if(command=='A'){
                cin>>x;
                stk.push(x);
                if(maxStk.empty()){
                    maxStk.push(x);
                    continue;
                }
                maxStk.push(max(x, maxStk.top()));
            }
        }
        
    }
    return 0;
}
