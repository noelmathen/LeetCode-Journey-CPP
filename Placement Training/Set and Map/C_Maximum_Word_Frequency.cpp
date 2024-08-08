#include<iostream>
#include<map>
#include<string>
#include<climits>
using namespace std;

int main(){
    int n, maxElement=INT_MIN;
    string strr, ansString;
    map<string,int> mapp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>strr;
        mapp[strr]++;
    }
    for(auto x : mapp){
        if(x.second >= maxElement){
            maxElement = x.second;
            ansString = x.first;
        }
    }
    cout<<ansString<<" "<<maxElement<<"\n";
    return 0;
}
