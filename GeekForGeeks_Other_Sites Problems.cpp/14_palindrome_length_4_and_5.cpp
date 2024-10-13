#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

bool isPalindrome(string s){
    int i=0, j=s.size()-1;
    while(i<=j){
        if(s[i++] != s[j--])
            return false;
    }
    return true;
}

int calculateScore(string s) {
    int n = s.length();
    int score = 0;
    for(int i=0; i<=n-4; i++){
        if(i<=n-4 && isPalindrome(s.substr(i, 4))){
            cout<<s.substr(i, 4)<<endl;
            score += 5;
        }
        if(i<=n-5 && isPalindrome(s.substr(i, 5))){
            cout<<s.substr(i, 5)<<endl;
            score += 10;
        }
    }
    return score;
}

int main() {
    // Test case 1
    string input1 = "ABABAAAA";
    int result1 = calculateScore(input1);
    cout << "Test Case 1: Input: " << input1 << " | Expected Output: 15 | Your Output: " << result1 << endl;

    // Test case 2
    string input2 = "ABBAABBA";
    int result2 = calculateScore(input2);
    cout << "Test Case 2: Input: " << input2 << " | Expected Output: 5 | Your Output: " << result2 << endl;

    // Test case 3
    string input3 = "AAAAA";
    int result3 = calculateScore(input3);
    cout << "Test Case 3: Input: " << input3 << " | Expected Output: 10 | Your Output: " << result3 << endl;

    // Test case 4
    string input4 = "ABCDE";
    int result4 = calculateScore(input4);
    cout << "Test Case 4: Input: " << input4 << " | Expected Output: 0 | Your Output: " << result4 << endl;

    // Test case 5
    string input5 = "ABABABABA";
    int result5 = calculateScore(input5);
    cout << "Test Case 5: Input: " << input5 << " | Expected Output: 20 | Your Output: " << result5 << endl;

    return 0;
}
