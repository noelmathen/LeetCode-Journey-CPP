class Solution {
  public:
    int getBit(int n, int i){
        return (n>>i & 1);
    }
    int setBit(int n, int i){
        return (n | 1<<i);
    }
    int clearBit(int n, int i){
        return (n & ~(1<<i));
    }
    void bitManipulation(int num, int i) {
        cout<<getBit(num, i-1)<<" "<<setBit(num, i-1)<<" "<<clearBit(num, i-1); //Because, its 1 based indexing, not 0 based
    }
};