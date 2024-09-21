class Solution {
public:
    int reverse(int x) {
        long long n = abs(x), digit=0;
        while(n > 0){
            digit = (digit*10) + n%10;
            n /= 10;
        }
        if(digit < INT_MIN || digit > INT_MAX)
            return 0;
        if(x<0)
            return -digit;
        return digit;
    }
};