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
    int findHeight(TreeNode* root, int& dmt){
        if(!root)
            return 0;
        int left = findHeight(root->left, dmt);
        int right = findHeight(root->right, dmt);
        dmt = max(dmt, left+right);
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int dmt = 0;
        findHeight(root, dmt);
        return dmt; 
    }
};