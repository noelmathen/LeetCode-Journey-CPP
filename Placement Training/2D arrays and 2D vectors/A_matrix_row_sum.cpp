#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, rowsum=0, x;
    vector<int> result;
    cin>>n >>m;
    for(int i=0; i<n; i++){
        rowsum=0;
        for(int j=0; j<m; j++){
            cin>>x;
            rowsum+=x;
        }
        result.push_back(rowsum);
    }
    for(auto it : result){
        cout<<it<<endl;
    }
}