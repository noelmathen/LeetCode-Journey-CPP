#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int a, b;
    vector<int> result;
    cin>> a;
    if(a<0){
        a=a+(2*-a);
    }
    while(a>0){
        result.push_back(a%10);
        a/=10;
    }
    for(int i=result.size()-1; i>=0; i--){
        cout<<result[i]<<endl;
    }
    return 0;
}
