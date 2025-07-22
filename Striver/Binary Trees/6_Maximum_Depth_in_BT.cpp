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
    void findDepth(TreeNode* root, int &count, int &maxDepth){
        if(!root){
            maxDepth = max(maxDepth, count);
            return;
        }
        
        count++;
        findDepth(root->left, count, maxDepth);
        findDepth(root->right, count, maxDepth);
        count--;
    }

    int maxDepth(TreeNode* root) {
        int count=0, maxDepth=INT_MIN;
        findDepth(root, count, maxDepth);
        return maxDepth;
    }
};