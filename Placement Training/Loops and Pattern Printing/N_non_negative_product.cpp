#include <iostream>
#include<vector>
using namespace std;
int main()
{
    long int a, b, c, count=0, T, N, A[10000], flag=0;
    vector<int> result;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>> A[j];
            if(A[j]<0){
                count++;
            }
            else if(A[j]==0)
                {flag=1;}
        }
        if(flag=1){
            result.push_back(0);
            continue;
        }
        if(count%2!=0)
            result.push_back(1);
        else
            result.push_back(0);
    }
    for (auto i : result) {
        cout<<i<< endl;
    }
    return 0;
}
