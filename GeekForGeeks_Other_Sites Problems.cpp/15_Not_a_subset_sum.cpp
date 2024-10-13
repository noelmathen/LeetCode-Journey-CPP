class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        int sum=1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] > sum)
                return sum;
            sum += arr[i];
        }
        return sum;
    }
};
