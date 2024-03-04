#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    if(n<=1500 && k<=1500)
        cout<<k%n;
    return 0;
}
