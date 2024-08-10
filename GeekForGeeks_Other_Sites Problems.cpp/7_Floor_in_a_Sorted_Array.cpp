class Solution {
  public:
    int binary_search(vector<long long> &v, long long low, long long high, long long x, long long k){
        if(low>high)
            return k;
        int mid = low + (high-low)/2;
        if(v[mid]==x)
            return mid;
        else if(x<v[mid])
            return binary_search(v, low, mid-1, x, k);
        return binary_search(v, mid+1, high, x, mid);
    }
    
    int findFloor(vector<long long> &v, long long n, long long x) {
        return binary_search(v, 0, n-1, x, -1);
    }
};