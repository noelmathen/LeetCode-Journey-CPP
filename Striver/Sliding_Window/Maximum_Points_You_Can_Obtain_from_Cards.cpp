class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        int n=cardScore.size(), r=n-1, lSum=0, rSum=0, maxSum=INT_MIN;;
        for(int i=0; i<k; i++){
            lSum += cardScore[i];
            maxSum = lSum;
        }
        for(int i=k-1; i>=0; i--){
            lSum -= cardScore[i];
            rSum += cardScore[r--];
            maxSum = max(maxSum, lSum+rSum);
        }
        return maxSum;
    }
};