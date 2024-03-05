#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    vector<vector<int>> results; // Store results for each test case
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        set<int> repeated;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i-1]) {
                repeated.insert(arr[i]);
            }
        }
        
        vector<int> result_vec; // Store repeated elements for current test case
        for(auto num : repeated) {
            result_vec.push_back(num);
        }
        
        results.push_back(result_vec);
    }
    
    // Print results separately
    for(auto result : results) {
        for(auto num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
