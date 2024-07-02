#include<iostream>
using namespace std;

int main(){
    long long int n, count3, count5, count15;
    cin>>n;
    count3 = n / 3;
    count5 = n / 5;
    count15 = n / 15;
    cout << count3 + count5 - count15 << endl;
    return 0;
}
