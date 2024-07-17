class Solution {
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        vector<int> v1;
        int i = 0, j = 0;
        
        while (i < n && j < m) {
            // Skip duplicates in arr1
            while (i > 0 && i < n && arr1[i] == arr1[i - 1]) {
                i++;
            }
            // Skip duplicates in arr2
            while (j > 0 && j < m && arr2[j] == arr2[j - 1]) {
                j++;
            }
            
            if (i < n && j < m) {
                if (arr1[i] == arr2[j]) {
                    v1.push_back(arr1[i]);
                    i++;
                    j++;
                } else if (arr1[i] < arr2[j]) {
                    v1.push_back(arr1[i]);
                    i++;
                } else {
                    v1.push_back(arr2[j]);
                    j++;
                }
            }
        }
        
        // Add remaining elements from arr1
        while (i < n) {
            if (i == 0 || arr1[i] != arr1[i - 1]) {
                v1.push_back(arr1[i]);
            }
            i++;
        }
        
        // Add remaining elements from arr2
        while (j < m) {
            if (j == 0 || arr2[j] != arr2[j - 1]) {
                v1.push_back(arr2[j]);
            }
            j++;
        }
        
        return v1;
    }
};


// class Solution{
//     public:
//     vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//     {
//         set<int> set1;
//         for(int i=0; i<n; i++){
//             set1.insert(arr1[i]);
//         }
//         for(int i=0; i<m; i++){
//             set1.insert(arr2[i]);
//         }
//         vector<int> v1(set1.begin(), set1.end());
//         return v1;
//     }
// };