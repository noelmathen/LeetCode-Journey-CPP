int minimumSwaps(vector<int> arr) {
    vector<pair<int, int>> v;
    int n = arr.size(), swaps=0;
    for(int i=0; i<n; i++){
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());
    n = v.size();
    for(int i=0; i<n; i++){
        if(v[i].second != i){
            swap(v[i], v[v[i].second]);
            swaps++;
            i--;
        }
    }
    return swaps;

}