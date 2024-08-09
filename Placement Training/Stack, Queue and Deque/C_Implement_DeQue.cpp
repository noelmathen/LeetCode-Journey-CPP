#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(){
    int t, x;
    string command;
    deque<int> deq;
    cin>>t;
    while(t--){
        cin>>command;
        if(command=="pop_front"){
            if(deq.empty()){
                cout<<"Empty"<<endl;
            } else{
                cout<<deq.front()<<endl;
                deq.pop_front();
            }
            continue;
        } else if(command=="pop_back"){
            if(deq.empty()){
                cout<<"Empty"<<endl;
            } else{
                cout<<deq.back()<<endl;
                deq.pop_back();
            }
            continue;
        }
        cin>>x;
        if(command=="push_back"){
            deq.push_back(x);
        } else{
            deq.push_front(x);
        }
    }
    return 0;
}