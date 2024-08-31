#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int a, decimal=0, i=0;
    vector<int> bin;
    cin>>a;
    while(a>0){
        decimal += (a%10)*pow(2, i++);
        a /= 10;
    }
    cout<<decimal<<endl;
    return 0;
}