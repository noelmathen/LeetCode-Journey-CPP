// Upper Bound: Finds the first position where the element is greater than x.

// Example
// Consider the sorted array arr = [1, 2, 2, 3, 3, 5] and x = 2.

// Finding the Upper Bound:
// We need the first index where the value is greater than 2.
// The first such value is 3 at index 3.
// So, the upper bound of 2 is 3.

int upperBound(vector<int> &arr, int x, int n){
	int low=0, high=n-1, mid, ub=n;

    while(low<=high){
        mid = low+(high-low)/2;

        if(arr[mid]>x){
			ub=mid;
			high = mid-1;
		}
		else
			low = mid+1;
    }
	return ub;
}