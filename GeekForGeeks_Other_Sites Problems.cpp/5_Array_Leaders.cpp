//OPTIMAL SOLUTION
class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> result;
        int rightMax=-1;
        for(int i=n-1; i>=0; i--){
            if(arr[i]>=rightMax){
                rightMax = arr[i];
                result.push_back(arr[i]);
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};




// //BRUTE FORCE SOLUTION
// class Solution {
//   public:
//     vector<int> leaders(int n, int arr[]) {
//         vector<int> result;
//         bool isLeader=true;
//         for(int i=0; i<n-1; i++){
//             isLeader=true;
//             for(int j=i+1; j<n; j++){
//                 if(arr[j]>arr[i]){
//                     isLeader=false;
//                     break;
//                 }
//             }
//             if(isLeader)
//                 result.push_back(arr[i]);
//         }
//         result.push_back(arr[n-1]);
//         return result;
//     }
// };