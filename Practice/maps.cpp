#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<int, int> newmap;

    newmap[8] = 1;
    newmap[3] = 2;
    newmap[2] = 3;
    newmap[1] = 9;

    for(auto it=newmap.begin(); it!=newmap.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    auto found = newmap.find(9);
    if(found != newmap.end())
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
}