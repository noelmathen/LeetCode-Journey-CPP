#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    long long int t, n , even=0, odd=0;
    cin>>t;
    vector<long long int> arr(1000), result;
    for(int i=0; i<t;i++){
        cin>>n;
        even=0;
        odd=0;
        for(int i=1; i<=n; i++){
            if((n%i==0)){
                if(i%2==0)
                    even++;
                else
                    odd++;
            }
        }
        if(even==odd){
            result.push_back(1);
            continue;
        }
        result.push_back(0);
    }
    for(auto i:result)
        cout<<i<<endl;
    return 0;
}