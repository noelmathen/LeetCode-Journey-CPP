class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxSum=0, l=0, r=n-1, leftSum=0, rightSum=0;
        for(int i=0; i<=k-1;i++){
            leftSum+=cardPoints[i];
        }
        maxSum=leftSum;
        for(int i=k-1; i>=0; i--){
            leftSum-=cardPoints[i];
            rightSum+=cardPoints[r];
            r--;
            maxSum = max(maxSum, leftSum+rightSum);
        }
        return maxSum;
    }
};
