//OPTIMAL SOLUTION for arrays with negative number - use of hashing
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum=0, maxLength=0;
        unordered_map<long long int, int> mapp;
        for(int i=0; i<N; i++){
            sum+=A[i];
            
            if(sum==K)
                maxLength=i+1;
                
            if(mapp.find(sum-K) != mapp.end()){
                maxLength = max(maxLength, i-mapp[sum-K]);
            }
            
            if(mapp.find(sum)==mapp.end())
                mapp[sum]=i;
        }
        return maxLength;
    } 
};



// //this solution is a sliding window/two pointer approach, but doesnt work for arrays with negative values. So it is not correct in this question
// class Solution{
//     public:
//     int lenOfLongSubarr(int A[],  int N, int K) 
//     { 
//         int l=0, r=0, maxLength=0, sum=0;
//         while(r<N){
//             sum+=A[r];
//             if(sum>K){
//                 sum-=A[l];
//                 l++;
//             }
//             if(sum==K){
//                 maxLength = max(maxLength, r-l+1);
//                 sum-=A[l];
//                 l++;
//             }
//             r++;
//         }
//         return maxLength;
//     } 
// };



// class Solution{
//     public:
//     int lenOfLongSubarr(int A[],  int N, int K) 
//     { 
//         int maxLength=0, sum=0;
//         for(int i=0; i<N; i++){
//             sum=0;
//             for(int j=i; j<N; j++){
//                 sum+=A[j];
//                 if(sum==K){
//                     maxLength = max(maxLength, j-i+1);
//                 }
//             }
//         }
        
//         return maxLength;
//     } 

// };