#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n, flag;
    cin>>n;
    vector<long long int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        flag=0;
        for(int j=0; j<n;j++){
            if((arr[i]==arr[j]) && i!=j){
                flag=1;
            }
        }
        if(flag==0)
            cout<<arr[i]<<" ";
    }
    return 0;
}