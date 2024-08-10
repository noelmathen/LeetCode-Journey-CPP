// Lower Bound: Finds the first position where the element is not less than x (i.e., it can be equal to x or greater than x).

// Example
// Consider the sorted array arr = [1, 2, 2, 3, 3, 5] and x = 2.

// Finding the Lower Bound:
// We need the first index where the value is not less than 2.
// The first such value is 2 at index 1.
// So, the lower bound of 2 is 1.

int lowerBound(vector<int> arr, int n, int x) {
	int low=0, high=n-1, mid, lb=n;

    while(low<=high){
        mid = low+(high-low)/2;

        if(arr[mid]>=x){
			lb=mid;
			high = mid-1;
		}
		else
			low = mid+1;
    }
	return lb;
}
