#include<iostream>  
using namespace std;  
int fibonacci(int n){
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2); 
}
int main()  
{  
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout<<fibonacci(j)<<"   ";
        cout<<endl;
    }
    return 0;  
}
