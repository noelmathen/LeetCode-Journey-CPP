#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long int t, n, input;
    vector<long long int> a, result;
    cin>>t;
    while(t--){
        cin>>n;
        a.clear();
        for(int i=0; i<n; i++){
            cin>>input;
            a.push_back(input);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n-1; i++){
            if(a.at(i)==a.at(i+1)){
                result.push_back(a.at(i));
                i++;
            }
        }
    }
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
        if(i%2!=0)
            cout<<"\n";
    }
    return 0;
}
