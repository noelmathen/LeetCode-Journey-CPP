#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    int t, x;
    string command;
    queue<int> que;
    cin>>t;
    while(t--){
        cin>>command;
        if(command=="Dequeue"){
            if(que.empty()){
                cout<<"Empty"<<endl;
            } else{
                cout<<que.front()<<endl;
                que.pop();
            }
            continue;
        }
        cin>>x;
        que.push(x);
        
    }
    return 0;
}