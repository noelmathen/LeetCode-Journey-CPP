#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=0;
    int a=1, b=1, c=2;
    while(i<N-3){
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    cout<<c;
}
