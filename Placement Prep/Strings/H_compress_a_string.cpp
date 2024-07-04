#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s, compressed;
    int count=1;
    getline(cin, s);
    int j;
    for(int i=0; i<s.size(); i++){
        j=i+1;
        int count=1;
        compressed+=s.at(i);
        while(j<s.size() &&  s.at(i)==s.at(j)){
            count++;
            j++;
        }
        compressed += to_string(count);
        i=j-1;
    }
    cout<<compressed<<endl;
    return 0;
}

//time complexity is only O(n), not n2.