#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n, x;
    unordered_set<int> sett;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        sett.insert(x);
    }
    cout<<sett.size()<<"\n";
    return 0;
}
