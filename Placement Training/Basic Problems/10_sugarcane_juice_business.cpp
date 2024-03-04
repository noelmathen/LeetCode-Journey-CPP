#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T, N, X;
    cin >> T;
    vector<int> answer;
    for (int i = 0; i < T; i++) {
        cin >> N;
        answer.push_back((N*50)*0.3);
    }
    for (auto i : answer) {
        cout << i << endl;
    }
    return 0;
}
