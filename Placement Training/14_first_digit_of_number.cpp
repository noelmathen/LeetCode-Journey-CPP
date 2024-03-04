#include <iostream>
#include<vector>

using namespace std;
int main()
{
    long long int a;
    vector<int> result;
    cin>> a;
    if(a<0){
        a=a+(2*-a);
    }
    while(a>0){
        result.push_back(a%10);
        a/=10;
    }
    cout<<result[result.size()-1]<<endl;
    return 0;
}
