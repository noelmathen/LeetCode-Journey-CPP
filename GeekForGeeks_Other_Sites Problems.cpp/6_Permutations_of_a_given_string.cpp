class Solution
{
	public:
	    void permutations(string S, vector<string>& ans, string ds, vector<int>& visited){
	        set<char> used;
	        if(ds.size()==S.size()){
	            ans.push_back(ds);
	            return;
	        }
	        
	        for(int i=0; i<S.size(); i++){
	            if(!visited[i] && used.find(S[i])==used.end()){
	                visited[i]=1;
	                ds.push_back(S[i]);
	                permutations(S, ans, ds, visited);
	                visited[i]=0;
	                ds.pop_back();
	                used.insert(S[i]);
	            }
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    sort(S.begin(), S.end());
		    vector<string> ans;
		    string ds;
		    vector<int> visited(S.size(), 0);
		    permutations(S, ans, ds, visited);
		    return ans;
		}
};