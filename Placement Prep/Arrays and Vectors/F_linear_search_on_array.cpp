#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, input;
    long long int key;
    vector<long long int> ar;
    cin>>n>>key;

    for(int i=0; i<n;i++){
        cin>>input;
        ar.push_back(input);
    }
    for(int i=0; i<n; i++){
        if(ar.at(i)==key){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}


