#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T, N, X;
    cin >> T;
    vector<int> answer;
    for (int i = 0; i < T; i++) {
        cin >> N >> X;
        // if (N<X){
        //     answer.push_back(0);
        //     continue;
        // }
        if((N*X)%4==0)
            answer.push_back((N*X)/4);
        else
            answer.push_back(((N*X)/4)+1);
    }
    for (auto i : answer) {
        cout << i << endl;
    }
    return 0;
}
