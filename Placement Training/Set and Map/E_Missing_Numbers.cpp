#include<iostream>
#include<map>
using namespace std;

int main(){
    long long int n, m, x;
    map<long long int, long long int> mapp1, mapp2;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        mapp1[x]++;
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>x;
        mapp2[x]++;
    }
    auto it1 = mapp1.begin(), it2 = mapp2.begin();
    while(it1!=mapp1.end() && it2!=mapp2.end()){
        if(it1->first != it2->first){
            cout<<it2->first<<" ";
            it2++;
            continue;
        }
        if(it1->second != it2->second){
            cout<<it2->first<<" ";
        }
        it1++;
        it2++;
    }
    while(it2!=mapp2.end()){
        cout<<it2->first<<" ";
        it2++;
    }

    return 0;
}
