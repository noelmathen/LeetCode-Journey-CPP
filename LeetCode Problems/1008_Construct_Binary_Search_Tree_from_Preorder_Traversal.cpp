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

// STRIVER SOLUTION
class Solution {

public:
    TreeNode* traverse(vector<int>& preorder, int& i, int ub){
        if(i>=preorder.size() || preorder[i] > ub)
            return NULL;

        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = traverse(preorder, i, root->val);
        root->right = traverse(preorder, i, ub);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return traverse(preorder, i, INT_MAX);
    }
};


// // MY SOLUTION
// class Solution {
// private:
//     int i=0;

// public:
//     void traverse(TreeNode* root, vector<int>& preorder, int lb, int ub){
//         if(i<preorder.size() && preorder[i] < root->val && preorder[i] > lb && preorder[i] < ub){
//             root->left = new TreeNode(preorder[i]);
//             i++;
//             traverse(root->left, preorder, lb, root->val);
//         }
        
                    
//         if(i<preorder.size() && preorder[i] > root->val && preorder[i] > lb && preorder[i] < ub){
//             root->right = new TreeNode(preorder[i]);
//             i++;
//             traverse(root->right, preorder, root->val, ub);
//         }
//     }

//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         TreeNode* root = new TreeNode(preorder[i++]);
//         traverse(root, preorder, INT_MIN, INT_MAX);
//         return root;
//     }
// };