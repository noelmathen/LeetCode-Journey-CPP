#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int getMinFlips(string pwd) {
    int count=0;
    for(int i=0; i<pwd.size(); i+=2)
      if(pwd[i]!=pwd[i+1])
        count++;
    return count;
}

int main() {
    string pwd;
    cin >> pwd;
    cout << getMinFlips(pwd) << endl;
    return 0;
}
