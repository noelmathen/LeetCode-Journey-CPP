class Solution{	
	public:	
		bool uniqueBinaryTree(int a, int b){
			return (a==2 || b==2) && (a!=b);
		}
};