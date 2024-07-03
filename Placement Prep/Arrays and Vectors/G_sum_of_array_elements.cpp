#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, t, sum=0;
    long long int input;
    vector<long long int> result;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(int i=0; i<n;i++){
            cin>>input;
            sum+=input;
        }
        result.push_back(sum);
    }
    for(auto i : result){
        cout<<i<<endl;
    }
    return 0;
}


