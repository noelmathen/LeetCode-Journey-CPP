#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int count=n;
        for(int j=1; j<=n; j++){
            if(j==n-i+1){
                cout<<"*";
                count--;
                continue;
            }
            cout<<count--;
        }
        cout<<"\n";
    }
    return 0;
}
