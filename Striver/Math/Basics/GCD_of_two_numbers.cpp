class Solution {
public:
    int GCD(int n1, int n2) {
        while(n1!=0 && n2!=0){
            // n1>=n2 ? n1=n1-n2 : n2=n2-n1; //O(max(n1, n2)) due to the while loop which subtracts the smaller number from the larger until one becomes zero.
            n1>=n2 ? n1=n1%n2 : n2=n2%n1; //O(log(min(n1, n2))) due to the Euclidean algorithm used for GCD calculation, since each step reduces at least one number significantly.
        }
        if(n1==0)
            return n2;
        return n1;
    }
};