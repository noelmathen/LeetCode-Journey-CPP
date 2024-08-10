int findCeil(vector<int> &a, int n, int x){
	int low=0, high=n-1, mid, ceil=-1;
	while(low<=high){
		mid = (low+high)/2;
		if(a[mid]>=x){
			high = mid-1;
			ceil = a[mid];
		}
		else
			low = mid+1;
	}
	return ceil;
}

int findFloor(vector<int> &a, int n, int x){
	int low=0, high=n-1, mid, floor=-1;
	while(low<=high){
		mid = (low+high)/2;
		if(a[mid]<=x){
			low = mid+1;
			floor = a[mid];
		}
		else
			high = mid-1;
	}
	return floor;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = findFloor(a, n, x);
	int ceil = findCeil(a, n, x);
	return {floor, ceil};
}