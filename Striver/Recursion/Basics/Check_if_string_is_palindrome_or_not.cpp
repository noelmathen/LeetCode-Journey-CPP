class Solution{	
	public:		
		bool checkPal(string &s, int i, int j){
			if(i>j)
				return true;
			if(s[i]!=s[j])
				return false;
			bool isPal = true;
			return isPal & checkPal(s, i+1, j-1);
		}
		bool palindromeCheck(string& s){
			return checkPal(s, 0, s.size()-1);
		}
};