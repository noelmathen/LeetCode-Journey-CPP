class Solution{
public:	
	int count(int arr[], int n, int x) {
	    auto firstOccurenceIndex = lower_bound(arr, arr + n, x) - arr; 
	    if(firstOccurenceIndex==n || arr[firstOccurenceIndex]!=x)
	        return 0;
        auto lastOccurenceIndex = (upper_bound(arr, arr + n, x) - arr)-1;
        return lastOccurenceIndex-firstOccurenceIndex+1;
	}
};