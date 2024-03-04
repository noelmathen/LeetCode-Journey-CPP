#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int N, i=1, fact=0;
    cin>>N;  
    while(i<=N)
        fact *= i;
    cout<<fact;
}
