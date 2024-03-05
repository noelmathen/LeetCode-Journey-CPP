#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    long long int n ;
    cin>>n;
    vector<long long int> arr(n), result;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}