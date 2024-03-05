#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, colsum=0, x;
    vector<int> result;
    cin>>n >>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0; i<n; i++){
        colsum=0;
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    
    for(int i=0; i<m; i++){
        colsum=0;
        for(int j=0; j<n; j++){
            colsum+=matrix[j][i];
        }
        result.push_back(colsum);
    }
    
    for(auto it : result){
        cout<<it<<endl;
    }
}