class Solution {
  public:
    int print2largest(vector<int> &arr) {
        int n=arr.size(), largest=arr[0], secLargest=-1, diff=0;
        for(int i=1; i<n; i++){
            if(arr[i]>largest){
                secLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>secLargest){
                secLargest=arr[i];
            }
        }
        return secLargest;
    }
};