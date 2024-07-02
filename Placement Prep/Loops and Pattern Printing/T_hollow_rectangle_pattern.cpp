#include<iostream>
#include<vector>
using namespace std;

int main(){
    int w, l;
    cin>>w>>l;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=w; j++){
            if( (i>1&&i<l) && (j>1&&j<w)){
                cout<<" ";
                continue;
            }
                
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
