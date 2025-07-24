/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    int pathSum(TreeNode* root, int &maxPath){
        if(!root)
            return 0;
        int leftPathSum = max(0, pathSum(root->left, maxPath));
        int rightPathSum = max(0, pathSum(root->right, maxPath));
        maxPath = max(maxPath, leftPathSum+rightPathSum+(root->data));
        return root->data + max(leftPathSum, rightPathSum);
    }

    int maxPathSum(TreeNode* root) {
        int maxPath=INT_MIN;
        pathSum(root, maxPath);
        return maxPath;
    }
};