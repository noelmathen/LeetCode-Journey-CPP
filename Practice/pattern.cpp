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


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of levels: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<endl;
        if(i==0){
            for(int s=0; s<n-i-1; s++){
                cout<<" ";
            }
            cout<<"*";
        }
        else if(i==n-1){
            for(int s=0; s<n-i-1; s++){
                cout<<" ";
            }
            for(int j=0; j<(2*n-1); j++){
                cout<<"*";
            }
        }
        else{
            for(int s=0; s<n-i-1; s++){
                cout<<" ";
            }
            cout<<"*";
            for(int s=0; s<2*i-1; s++){
                cout<<" ";
            }
            cout<<"*";
        }
    }
}



// #include<iostream>
// using namespace std;

// int main(){
//     int n=6;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i; j++){
//             cout<<"*";
//         }
//         for(int j=i; j<=n; j++){
//             cout<<" ";
//         }
//         for(int j=i; j<=n+1; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<i; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=i; j<=n; j++){
//             cout<<"*";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=i; j<=n; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<n-j+1;
//         }
//         cout<<"\n";
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=i; j<=n; j++){
//             cout<<i;
//         }
//         cout<<"\n";
//     }
    

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int n=6;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i; j++){
//             cout<<n-j+1;
//         }
//         for(int j=i; j<n; j++){
//             cout<<n-i+1;
//         }
//         for(int j=i; j<n+1; j++){
//             cout<<n-i+1;
//         }
//         for(int j=1; j<i; j++){
//             cout<<n-i+j+1;
//         }
//         cout<<"\n";
//     }
//     for(int i=2; i<=n; i++){
//         for(int j=i; j<n; j++){
//             cout<<n-j+i;
//         }
//         for(int j=1; j<i; j++){
//             cout<<i;
//         }
//         for(int j=1; j<i; j++){
//             cout<<i;
//         }
//         for(int j=i; j<=n; j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



// //Pookalam
// #include<iostream>
// using namespace std;

// int main(){
//     int n=9;
//     for(int i=1; i<=n; i++)
//         cout<<" * ";
//     cout<<"\n";

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if  ( i==1 || i==n || j==1 || j==n ||
//                  ((i==2 || i==8) && (j==2 || j==3 || j==7 || j==8)) ||
//                  ((i==3 || i==4 || i==5 || i==6 || i==7) && (j==2 || j==4 || j==5 || j==6 || j==8))
//                 )
//                 cout<<" * ";
//             else
//                 cout<<"   ";
//         }
//         cout<<"\n";
//     }
//     for(int i=1; i<=n; i++)
//         cout<<" * ";
//     cout<<"\n";

//     return 0;
// }
