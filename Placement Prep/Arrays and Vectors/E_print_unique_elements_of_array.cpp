#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, input;
    long long int sum=0;
    bool isUninque=true;
    vector<long long int> ar;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>input;
        ar.push_back(input);
    }
    for(int i=0; i<n; i++){
        isUninque=true;
        for(int j=0; j<n; j++){
            if(ar.at(i)==ar.at(j) && i!=j){
                isUninque=false;
                continue;
            }
        }
        if(isUninque)
            cout<<ar.at(i)<<" ";
    }
    return 0;
}
