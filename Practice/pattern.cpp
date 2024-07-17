// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of levels: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<endl;
//         for(int j=0; j<=i; j++){
//             cout<<"* ";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of levels: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<endl;
//         for(int j=0; j<=n-i-1; j++){
//             cout<<" *";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of levels: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<endl;
//         for(int j=0; j<=n-i-1; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<((2*i)+1); k++){
//                 cout<<"*";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of levels: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<endl;
//         if(i==0){
//             for(int s=0; s<n-i-1; s++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         else if(i==n-1){
//             for(int s=0; s<n-i-1; s++){
//                 cout<<" ";
//             }
//             for(int j=0; j<(2*n-1); j++){
//                 cout<<"*";
//             }
//         }
//         else{
//             for(int s=0; s<n-i-1; s++){
//                 cout<<" ";
//             }
//             cout<<"*";
//             for(int s=0; s<2*i-1; s++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//     }
// }



#include<iostream>
using namespace std;

int main(){
    int n=6;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"*";
        }
        for(int j=i; j<=n; j++){
            cout<<" ";
        }
        for(int j=i; j<=n+1; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"*";
        }
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<=n; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}



