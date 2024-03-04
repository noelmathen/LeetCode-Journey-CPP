#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long int N=0, num=0, dig=0;
    cin>>N;
    int val=N;
    int final_num=val;
    while(N>0){
        N/=10;
        dig++;
    }
    num=0;
    while(val>0){
        num = (num)+(pow(val%10, dig));
        val/=10;
    }
    if(num==final_num){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
