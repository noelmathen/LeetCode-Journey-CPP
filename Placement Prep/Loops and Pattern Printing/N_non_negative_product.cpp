#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, t, a[10000];
    bool hasZero=false;
    vector<int> result;
    cin>>t;
    while(t--){
        int num=0;
        cin>>n;
        for(int i=0;  i<n; i++){
            cin>>a[i];
            if(a[i]==0){
                hasZero=true;
                continue;
            }
            a[i]<0 ? (num==0?num=1:num=0):num=num;
        }
        if(hasZero)
            num=0;
        result.push_back(num);
    }
    for(auto i:result){
        cout<<i<<endl;
    }
}
