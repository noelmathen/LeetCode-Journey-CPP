#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T, x, y;
    cin>>T;
    while(T--){
        cin>>x>>y;
        if(y>x)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}