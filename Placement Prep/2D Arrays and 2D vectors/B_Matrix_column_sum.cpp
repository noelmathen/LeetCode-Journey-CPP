#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n, m, sum=0, x;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    for(int j=0; j<m; j++){
        sum=0;
        for(int i=0; i<n; i++){
            sum+=matrix[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}