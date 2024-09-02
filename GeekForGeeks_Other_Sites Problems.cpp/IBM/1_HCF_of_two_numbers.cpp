#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b;
    while(a!=b){
        a>b ? a-=b : b-=a;
    }
    cout<<a<<endl;

    return 0;
}