#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n, k, flag=0;
    cin>>n >> k;
    vector<long long int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}