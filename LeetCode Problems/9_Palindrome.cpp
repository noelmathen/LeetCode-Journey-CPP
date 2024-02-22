class Solution {
public:
    bool isPalindrome(int x) {
        long long num=0, n=x;
        while(x>0){
            num = (num*10) + (x%10);
            x/=10;
        }
        return n==num;
    }
};