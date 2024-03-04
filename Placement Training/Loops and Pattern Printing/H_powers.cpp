#include <iostream>
using namespace std;
int main()
{
    long int a, b, pow=1;
    cin>>a>>b;
    for(int i=0; i<b; i++){
        pow*=a;
    }
    cout<<pow;
}
