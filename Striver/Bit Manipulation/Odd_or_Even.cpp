class Solution {
  public:
    string oddEven(int n) {
        if(n & 1) 
            return "odd";
        return "even";
    }
};