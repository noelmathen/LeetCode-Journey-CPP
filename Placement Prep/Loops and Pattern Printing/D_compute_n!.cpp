// #include<iostream>
// using namespace std;

// int main(){
//     int n, fact=1;
//     cin>>n;
//     if(n>=0 && n<=10){
//         for(int i=n; i>0; i--){
//             fact*=i;
//         }
//         cout<<fact<<endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1)
        return 1;
    
    return n * fact(n-1); 
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}