#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int N, i=1, fact=1;
    cin>>N;  
    while(i<=N)
        {fact *= i;
        i++;}
    cout<<fact;
}
