class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums){
	    vector<pair<int,int>> v;
	    for(int i=0; i<nums.size(); i++){
	        v.push_back({nums[i], i});
	    }
	    sort(v.begin(), v.end());
	    int count=0;
	    for(int i=0; i<v.size(); i++){
	        if(v[i].second != i){
	            swap(v[i], v[v[i].second]);
	            count++;
	            i--;
	        }
	    }
	    return count;
	}
};
