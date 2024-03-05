#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, x;
    vector<long int> result;
    cin>>n >>m;
    vector<vector<long int>> matrix(n, vector<long int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}