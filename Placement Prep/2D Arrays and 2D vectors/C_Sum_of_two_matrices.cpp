#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n, m, x;
    cin>>n>>m;
    vector<vector<int>> matrix1(n, vector<int>(m)), matrix2(n, vector<int>(m)), sum(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}