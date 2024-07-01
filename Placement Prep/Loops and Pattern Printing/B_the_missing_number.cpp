#include<iostream>
using namespace std;

int main(){
    int sum=0, L[100];
    for(int i=1; i<10; i++){
        cin>>L[i];
        sum+=L[i];
    }
    cout<<5050-sum;
    return 0;
}
