class Solution {
public:
    int GCD(int n1, int n2) {
        while(n1!=0 && n2!=0){
            n1>=n2 ? n1=n1%n2 : n2=n2%n1; 
        }
        if(n1==0)
            return n2;
        return n1;
    }
    int LCM(int n1,int n2) {
        return (n1*n2)/GCD(n1, n2);
    }
};