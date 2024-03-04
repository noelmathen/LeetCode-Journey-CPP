#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T, A, B, C, D;
    cin >> T;
    vector<string> answer;
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C >> D;
        if ((A - C) < (B - D)) {
            answer.push_back("First");
        } else if ((B - D) < (A - C)) {
            answer.push_back("Second");
        } else {
            answer.push_back("Any");
        }
    }
    for (auto i : answer) {
        cout << i << endl;
    }
    return 0;
}
