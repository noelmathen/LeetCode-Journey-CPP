#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//using recursion
void print_reverse(int i, vector<long long int> ar){
    if(i<0)
        return;
    cout<<ar.at(i)<<" ";
    print_reverse(i-1, ar);
}

int main(){
    int n;
    long long int input;
    vector<long long int> ar;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>input;
        ar.push_back(input);
    }
    print_reverse(ar.size()-1, ar);
    return 0;
}



//using reverse printing
// int main(){
//     int n;
//     long long int input;
//     vector<int> ar;
//     cin>>n;

//     for(int i=0; i<n;i++){
//         cin>>input;
//         ar.push_back(input);
//     }
//     for(auto it=ar.end()-1; it>=ar.begin(); it--){
//         cout<<*it<<" ";
//     }
//     cout<<endl;

//     return 0;
// }
