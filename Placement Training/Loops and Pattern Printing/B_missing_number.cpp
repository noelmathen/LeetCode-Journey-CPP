#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int sum=0;
    vector<int> result(99);
    for(int i=0; i<99; i++){
        cin>>result[i];
        sum += result[i];
    }
    cout<<(5050-sum);
}
