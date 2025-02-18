class Solution{
    public:
        int findDigitSum(int n){
            int sum=0;
            while(n>0){
                sum += n%10;
                n /= 10;
            }
            return sum;
        }
    
        int addDigits(int num){
            int n=findDigitSum(num);
            if(n/10 <= 0)	
                return n;
            return addDigits(n);
        }
    };