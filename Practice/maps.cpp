#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    map<int, int> newmap;

    newmap[8] = 1;
    newmap[3] = 2;
    newmap[2] = 3;
    newmap[1] = 9;

    newmap.insert({9, 2});

    for(auto itr=newmap.begin(); itr!=newmap.end(); itr++){
        cout<<itr->first<<" -> "<<itr->second<<endl;
    }

    auto found = newmap.find(2);
    if(found != newmap.end())
        cout<<"Element foundd"<<found->first<<" "<<found->second<<endl;
    else
        cout<<"Element not found"<<endl;

    //in map, we can do map1==map2 two compare two maps(both key and value should be same)
}