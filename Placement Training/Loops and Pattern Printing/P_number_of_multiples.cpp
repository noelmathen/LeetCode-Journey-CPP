#include <iostream>
#include<vector>
using namespace std;
int main()
{
    register int n, count=0;
    vector<int> result;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%3==0 || i%5==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
