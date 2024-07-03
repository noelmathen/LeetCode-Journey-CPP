#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, input;
    long long int sum=0;
    vector<long long int> ar;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>input;
        ar.push_back(input);
    }
    for(int i=0; i<n-1; i++){
        for(int j=1+i; j<n; j++){
            if(ar.at(i)==ar.at(j)){
                cout<<ar.at(i)<<endl;
                break;
            }
        }
    }
    return 0;
}


