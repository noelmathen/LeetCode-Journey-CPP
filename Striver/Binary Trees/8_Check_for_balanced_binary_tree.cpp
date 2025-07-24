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
    int getDepth(TreeNode* root){
        if(!root)
            return 0;
        int left = getDepth(root->left);
        int right = getDepth(root->right);
        if(left==-1 || right==-1)
            return -1;
        if(abs(left-right)>1)
            return -1;
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int height = getDepth(root);
        return height!=-1;
    }
};