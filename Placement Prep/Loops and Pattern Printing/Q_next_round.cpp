#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k, x;
    vector<int> arr;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    int count=0, threshold=arr[k-1];
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]>=threshold)
            count++;
        else
            break;
    }    
    cout<<count<<endl;
    return 0;
}
