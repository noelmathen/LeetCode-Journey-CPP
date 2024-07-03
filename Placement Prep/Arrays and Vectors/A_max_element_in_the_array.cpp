#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//     int n, input;
//     long long int max=-9999999999;
//     vector<int> ar;
//     cin>>n;

//     for(int i=0; i<n;i++){
//         cin>>input;
//         ar.push_back(input);
//         if(input>max)
//             max=input;
//     }
//     cout<<max<<endl;

//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, input;
    vector<int> ar;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>input;
        ar.push_back(input);
    }
    cout<<*max_element(ar.begin(), ar.end())<<endl;

    return 0;
}

