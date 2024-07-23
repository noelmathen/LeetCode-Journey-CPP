#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n, m, sum=0, x;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<m; j++){
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;
    }

    return 0;
}