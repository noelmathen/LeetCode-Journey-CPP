#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t, n, m, x;
    vector<vector<vector<long int>>> result;

    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<long int>> matrix(n, vector<long int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>matrix[i][j];
            }
        }

        cin>>n>>m;
        vector<vector<long int>> matrix(n, vector<long int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>matrix[i][j];
            }
        }

    }
}