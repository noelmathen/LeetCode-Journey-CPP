#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, input;
    long long int sum=0;
    vector<long long int> ar;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>input;
        ar.push_back(input);
        if(input%2!=0)
            sum+=input;
    }
    cout<<sum<<endl;

    return 0;
}


