#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int N=0, num=0;
    cin>>N;
    int val=N;
    while(N>0){
        num = (num)+(pow(N%10, 3));
        N/=10;
    }
    if(num==val){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
