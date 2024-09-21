vector<int> icecreamParlor(int m, vector<int> arr) {
    int n = arr.size();
    unordered_map<int, int> mapp;
    for(int i=0; i<n; i++){
        if(mapp.find(m-arr[i]) != mapp.end())
            return {mapp[m-arr[i]]+1, i+1};
        mapp[arr[i]] = i;
    }
    return {-1, -1};
}


// vector<int> icecreamParlor(int m, vector<int> arr) {
//     int n = arr.size();
//     for(int i=0; i<n-1; i++){
//         int sum=0;
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j] == m)
//                 return {i+1, j+1};
//         }
//     }
//     return {-1, -1};
// }