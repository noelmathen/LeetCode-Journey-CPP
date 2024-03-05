#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, count=0;
    vector<long int> result;
    cin>>n >>m;
    vector<vector<long int>> matrix(n, vector<long int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==0){
                count++;
                if(count>(n*m)/2){
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    cout<<"No";
    return 0;
}