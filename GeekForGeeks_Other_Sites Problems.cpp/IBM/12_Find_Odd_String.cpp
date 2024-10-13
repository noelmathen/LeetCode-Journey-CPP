#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<map>
using namespace std;

vector<int> findDifference(string s){
    int n = s.size();
    vector<int> diff(n);
    for(int i=0; i<n-1; i++){
        diff.push_back(s[i+1]-s[i]);
    }
    return diff;
}

string findOdd(vector<string> series) {
    map<vector<int>, string> mapp;
    int n = series.size();
    mapp.insert({findDifference(series[0]), series[0]});
    mapp.insert({findDifference(series[1]), series[1]});
    for(int i=2; i<n; i++){
        if(mapp.size()==1 && mapp.find(findDifference(series[i])) == mapp.end()){
            return series[i];
        }
        mapp[findDifference(series[i])] = series[i];
        if(mapp.size() == 2){
            for(auto x : mapp){
                if(x.first != findDifference(series[i])){
                    return x.second;
                }
            }
        }
    }
    return "";
}

int main() {
    int passedTests = 0, totalTests = 0;

    // Test case 1
    vector<string> series1 = {"BDC", "CED", "DEF", "ACB"};
    string expected1 = "DEF";
    string result1 = findOdd(series1);
    cout << "Test Case 1: Expected Output: " << expected1 << " | Your Output: " << result1 << " | ";
    if (result1 == expected1) {
        cout << "Pass" << endl;
        passedTests++;
    } else {
        cout << "Fail" << endl;
    }
    totalTests++;

    // Test case 2
    vector<string> series2 = {"DCB", "BCD", "EFG", "ABC"};
    string expected2 = "DCB";
    string result2 = findOdd(series2);
    cout << "Test Case 2: Expected Output: " << expected2 << " | Your Output: " << result2 << " | ";
    if (result2 == expected2) {
        cout << "Pass" << endl;
        passedTests++;
    } else {
        cout << "Fail" << endl;
    }
    totalTests++;

    // Test case 3
    vector<string> series3 = {"LMNO", "MNOP", "OPQR", "QRST", "MLNO"};
    string expected3 = "MLNO";
    string result3 = findOdd(series3);
    cout << "Test Case 3: Expected Output: " << expected3 << " | Your Output: " << result3 << " | ";
    if (result3 == expected3) {
        cout << "Pass" << endl;
        passedTests++;
    } else {
        cout << "Fail" << endl;
    }
    totalTests++;

    // Test case 4
    vector<string> series4 = {"AAAA", "BBBB", "CCCC", "ABAB"};
    string expected4 = "ABAB";
    string result4 = findOdd(series4);
    cout << "Test Case 4: Expected Output: " << expected4 << " | Your Output: " << result4 << " | ";
    if (result4 == expected4) {
        cout << "Pass" << endl;
        passedTests++;
    } else {
        cout << "Fail" << endl;
    }
    totalTests++;

    // Test case 5
    vector<string> series5 = {"PQRS", "QRST", "RTUV", "STUV"};
    string expected5 = "RTUV";
    string result5 = findOdd(series5);
    cout << "Test Case 5: Expected Output: " << expected5 << " | Your Output: " << result5 << " | ";
    if (result5 == expected5) {
        cout << "Pass" << endl;
        passedTests++;
    } else {
        cout << "Fail" << endl;
    }
    totalTests++;

    // Test case 6
    vector<string> series6 = {"ADC", "BED", "CFE", "DGF", "FGH"};
    string expected6 = "FGH";
    string result6 = findOdd(series6);
    cout << "Test Case 6: Expected Output: " << expected6 << " | Your Output: " << result6 << " | ";
    if (result6 == expected6) {
        cout << "Pass" << endl;
        passedTests++;
    } else {
        cout << "Fail" << endl;
    }
    totalTests++;

    // Summary of passed test cases
    cout << endl << "Test Results: " << passedTests << "/" << totalTests << " test cases passed." << endl;

    return 0;
}
