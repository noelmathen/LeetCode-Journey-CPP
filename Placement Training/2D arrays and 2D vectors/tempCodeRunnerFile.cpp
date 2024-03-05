#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, x;
    vector<int> result;
    cin>>n >>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
}