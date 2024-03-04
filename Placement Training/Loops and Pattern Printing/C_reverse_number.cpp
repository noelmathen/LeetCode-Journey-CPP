#include <iostream>
#include<vector>
using namespace std;
int main()
{
    long long int a=0, num=0;
    cin>>a;
    if(a<0){
        a=a+(2*-a);
    }
    while(a>0){
        num = (num*10)+(a%10);
        a/=10;
    }
    if(a<0)
        {num = 0-num;
        cout<<num;}
    else
        cout<<num;
}
