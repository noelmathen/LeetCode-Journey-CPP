#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    set<int> set1={1, 2, 1, 6, 4, 8, 2, 9}; //initialization
    set1.insert(5); //inserting
    for(auto i:set1){
        cout<<i<<" ";
    }
    cout<<endl<<*set1.begin()<<" "<<*prev(set1.end())<<endl;

    cout<<endl;
    set<int, greater<int>> set2(set1.begin(), set1.end()); //copysing elements of set to another
    set2.erase(9);
    for(auto i:set2){
        cout<<i<<" ";
    }
    cout<<endl<<"Size of set1: "<<set1.size()<<endl;
    std::cout << "Is set empty? " << (set2.empty() ? "Yes" : "No") << std::endl;

    for(auto itr=set1.begin(); itr!=set1.end(); itr++){
        cout<<*itr<<" ";
    }

    if(set2.find(2)!=set2.end()){
        cout<<endl<<"Element found"<<endl;
    }
    else{
        cout<<endl<<"Element not found"<<endl;
    }

    //erase from one element to another(2nd paramter not erased. just before that)
    set1.erase(set1.find(1), set1.find(8));
    for(auto i:set1){
        cout<<i<<" ";
    }

    return 0;
}
