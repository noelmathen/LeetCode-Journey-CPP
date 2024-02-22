// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     unordered_set<int> uset;
//     uset = {1, 2, 4, 6, 2, 2, 3, 1, 4, 5};
//     auto found = uset.find(7);
//     if(found != uset.end()){
//         cout<<*found<<" is present"<<endl;
//     }else{
//         cout<<*found<<" is not present"<<endl;
//     }
//     for(auto num : uset){
//         cout<<num;
//     }
// }

#include<iostream>
#include<unordered_set>
#include<vector>
#include<string>
using namespace std;
int main(){
    unordered_set<int> uset;
    vector<int> v1 = {1, 2, 4, 6, 2, 2, 3, 1, 4, 5};
    for(auto vec : v1){
        uset.insert(vec);
    }
    cout<<uset.size();
}

