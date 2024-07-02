#include<iostream>
using namespace std;

int main(){
    int n;
    char x = 'A';
    cin>>n;
    for(int i=1; i<=n; i++){
        x = 'A'-1;
        for(int j=1; j<=i*2-1; j++){
            j<=i ? x++ : x--;   
            cout<<x<<" ";

        }
        cout<<"\n";
    }
    return 0;
} 
