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
    bool checkSymmetric(TreeNode* tree1, TreeNode* tree2){
        if(!tree1 || !tree2)
            return tree1==tree2;
        if(tree1->val != tree2->val)
            return false;
        return checkSymmetric(tree1->left, tree2->right) && checkSymmetric(tree1->right, tree2->left);
    }

    bool isSymmetric(TreeNode* root) {
        bool sym = checkSymmetric(root, root);
        return sym;
    }
};