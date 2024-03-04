#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x=0, a[100000], n=0;
    int i=0;
    while(1){
        cin>>a[i];
        if(a[i]==0)
            break;
        n++;
        i++;
    }
    for(int i=0; i<n; i++){
        cout<<"Case "<<i+1<<": "<<a[i]<<endl;
    }
}
