void miniMaxSum(vector<int> arr) {
    long long Sum=0, Min=LONG_LONG_MAX, Max=LONG_LONG_MIN;
    for(auto x : arr){
        Sum += x;
        Min = min(Min, (long long)x);
        Max = max(Max, (long long)x);
    }
    cout<<Sum-Max<<" "<<Sum-Min<<endl;
}