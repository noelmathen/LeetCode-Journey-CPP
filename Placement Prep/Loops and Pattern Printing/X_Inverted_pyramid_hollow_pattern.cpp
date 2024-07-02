#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int k=0;
        for(int j=i; j<=n; j++){
            k++;
            if( (i>1&&i<n-1) && (k>1&&k<n-i+1) ){
                cout<<"  ";
                continue;
            }
            cout<<"* ";
        }
        
        cout<<"\n";
    }
    return 0;
} 
