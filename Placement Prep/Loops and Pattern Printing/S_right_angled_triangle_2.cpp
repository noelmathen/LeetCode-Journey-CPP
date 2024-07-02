#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, x, y;
    cin>>n;
    int count=0;
    for(int i=1; i<=n; i++){
        count++;
        x=0, y=4;
        for(int j=1; j<=i; j++){
            cout<<count+x<<" ";
            x=x+(y--);
        }
        cout<<"\n";
    }
    return 0;
}
