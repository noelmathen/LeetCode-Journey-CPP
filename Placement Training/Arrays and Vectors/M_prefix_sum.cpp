#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Construct the prefix sum array
        vector<int> prefix_sum(N + 1, 0);
        for (int i = 1; i <= N; ++i) {
            int num;
            cin >> num;
            prefix_sum[i] = prefix_sum[i - 1] + num;
        }

        int Q;
        cin >> Q;

        // Handle each query and print the output separately
        while (Q--) {
            int L, R;
            cin >> L >> R;

            // Calculate the sum of elements from index L to index R
            int sum = prefix_sum[R] - prefix_sum[L - 1];
            cout << sum << endl;
        }

        // Print a newline after each test case
        cout << endl;
    }

    return 0;
}
