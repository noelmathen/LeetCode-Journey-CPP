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
    bool checkSymmetric(TreeNode* tree1, TreeNode* tree2){
        if(!tree1 || !tree2)
            return tree1==tree2;
        if(tree1->data != tree2->data)
            return false;
        return checkSymmetric(tree1->left, tree2->right) && checkSymmetric(tree1->right, tree2->left);
    }

    bool isSymmetric(TreeNode* root) {
        bool sym = checkSymmetric(root, root);
        return sym;
    }
};