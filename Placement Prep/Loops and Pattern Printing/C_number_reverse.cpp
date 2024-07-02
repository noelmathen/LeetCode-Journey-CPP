#include<iostream>
using namespace std;

int main(){
    int n, num=0;
    cin>>n;
    int x=abs(n);
    while(x!=0){
        num= num*10 + (x%10);
        x/=10;
    }
    if (n<0)
        cout<<num*(-1)<<endl;
    else
        cout<<num<<endl;

    return 0;
}
