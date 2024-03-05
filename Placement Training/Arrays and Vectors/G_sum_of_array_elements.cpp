#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    long long int t, n, sum=0;
    cin>>t;
    vector<long long int> arr(1000), result;
    for(int i=0; i<t;i++){
        sum=0;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        result.push_back(sum);
    }
    for(auto i:result){
        cout<<i<<endl;
    }
    return 0;
}