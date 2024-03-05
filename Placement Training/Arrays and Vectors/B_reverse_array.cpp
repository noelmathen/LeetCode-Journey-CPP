#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=arr.size(); i>0; i--){
        cout<<i<<" ";
    }
    return 0;
}