class Solution{	
	public:
		bool prime(int num, int i){
			if(i*i>num)
				return true;
			if(num%i==0)
				return false;
			return prime(num, i+1);
		}

		bool checkPrime(int num){
			return prime(num, 2);
		}
};