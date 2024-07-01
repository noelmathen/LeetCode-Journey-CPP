#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T, x, y;
    cin>>T;
    while(T--){
        cin>>x>>y;
        cout<<abs(x-y)<<endl;
    }
    return 0;
}