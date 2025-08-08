/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/



// STRIVER SOLUTION
class Solution {
public:
    TreeNode* traverse(vector<int>& preorder, int& i, int ub){
        if(i>=preorder.size() || preorder[i] > ub)
            return NULL;

        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = traverse(preorder, i, root->data);
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
//         if(i<preorder.size() && preorder[i] < root->data && preorder[i] > lb && preorder[i] < ub){
//             root->left = new TreeNode(preorder[i]);
//             i++;
//             traverse(root->left, preorder, lb, root->data);
//         }
        
                    
//         if(i<preorder.size() && preorder[i] > root->data && preorder[i] > lb && preorder[i] < ub){
//             root->right = new TreeNode(preorder[i]);
//             i++;
//             traverse(root->right, preorder, root->data, ub);
//         }
//     }

//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         TreeNode* root = new TreeNode(preorder[i++]);
//         traverse(root, preorder, INT_MIN, INT_MAX);
//         return root;
//     }
// };