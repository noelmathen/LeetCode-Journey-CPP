#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n, m, zeros=0, x;
    cin>>n>>m;
    vector<vector<int>> matrix1(n, vector<int>(m)), matrix2(n, vector<int>(m)), sum(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix1[i][j];
            if(matrix1[i][j]==0) zeros++;
        }
    }
    zeros>(n*m)/2 ? cout<<"Yes"<<endl : cout<<"No"<<endl;

    
    return 0;
}