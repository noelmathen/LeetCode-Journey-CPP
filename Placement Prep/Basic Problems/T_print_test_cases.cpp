#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x, i=1;
    vector<int> v1;
    while(1){
        cin>>x;
        if(x==0)
            break;
        v1.push_back(x);
    }
    for(int i=1;i<=v1.size(); i++){
        cout<<"Case "<<i<<": "<<v1[i-1]<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int x, i=1;
//     while(1){
//         cin>>x;
//         if(x==0)
//             break;
//         cout<<"Case "<<i<<": "<<x<<endl;
//     }


//     return 0;
// }
