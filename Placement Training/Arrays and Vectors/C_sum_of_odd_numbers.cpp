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
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
            }
        }
    }
    return 0;
}