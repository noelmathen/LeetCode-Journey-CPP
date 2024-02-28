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
#include<set>
#include<vector>
#include<string>
using namespace std;
int main(){
    set<int> uset; //ascending order. normal default
    set<int, greater<int>> uset; //descending order set
    vector<int> v1 = {1, 2, 4, 6, 2, 2, 3, 1, 4, 5};
    for(auto vec : v1){
        uset.insert(vec);
    }
    cout<<uset.size();
    for(auto it: uset){
        cout<<it<<",  ";
    }
}

