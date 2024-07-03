#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1={2, 4, 6, 8, 11};
    int size = v1.size();
    cout<<size<<endl;

    v1.reserve(10);
    int capacity = v1.capacity();
    cout<<capacity<<endl;

    for(auto it=v1.begin(); it!=v1.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;

    v1.push_back(12);
    v1.insert(v1.begin(), 13);
    v1.insert(v1.end(), 114);

    for(auto i:v1){
        cout<<i<<" ";
    } 

    cout<<endl<<v1.front()<<" "<<v1.back()<<endl;
}