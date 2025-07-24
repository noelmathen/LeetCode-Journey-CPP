/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int &maxPath){
        if(!root)
            return 0;
        int leftPathSum = max(0, pathSum(root->left, maxPath));
        int rightPathSum = max(0, pathSum(root->right, maxPath));
        maxPath = max(maxPath, leftPathSum+rightPathSum+(root->val));
        return root->val + max(leftPathSum, rightPathSum);
    }

    int maxPathSum(TreeNode* root) {
        int maxPath=INT_MIN;
        pathSum(root, maxPath);
        return maxPath;
    }
};