// //BRUTE FORCE RECURSIVE SOLUTION:
// class Solution {
// public:
//     double calcPow(double x, int n, double i){
//         if(n<=1)
//             return x;
//         return calcPow(x*i, n-1, i);
//     }

//     double myPow(double x, int n) {
//         if(n==0)
//             return 1;
//         if(n==1)
//             return x;
//         double val = calcPow(x, abs(n), x);
//         if(n>0)
//             return val;
//         return 1/val; 
//     }
// };



// //OPTIMAL - ITERATIVE
// class Solution {
// public:
//     double myPow(double x, int n) {
//             double ans=1;
//             long long N = n;
//             if(N<0){
//                 x=1/x;
//                 N = N * -1;
//             }
//             while(N>0){
//                 if(N%2==1)
//                     ans = ans * x;
//                 x = x*x;
//                 N = N/2;
//             }
//             return ans;
//     }
// };



//OPTIMAL - RECURSIVE
class Solution {
    public:
        double findPower(double x, long long n, double ans){
            if(n<=0)
                return ans;
            if(n%2)
                ans *= x;
            return findPower(x*x, n/2, ans);
        }
    
        double myPow(double x, int n) {
            long long N = n;
            if(N<0){
                x = 1/x;
                N = -N;
            }
            return findPower(x, N, 1);
        }
    };
    