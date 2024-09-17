#include<iostream>
using namespace std;

int main(){
    int a=3, b=4;
    cout<<"The numbers before swapping: "<<a<<" and "<<b<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"The numbers after swapping: "<<a<<" and "<<b<<endl;

    return 0;
}