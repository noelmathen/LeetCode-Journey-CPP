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



//STRIVERS kurachoodem better SOLUTION
class Solution {

public:
    bool checkBST(TreeNode* root, long small, long large){
        if(!root)
            return true;
        
        if(root->val <= small || root->val >= large)
            return false;
        
        return checkBST(root->left, small, root->val) && checkBST(root->right, root->val, large);
    }

    bool isValidBST(TreeNode* root) {
        return checkBST(root, LONG_MIN, LONG_MAX);
    }
};



// //MY SOLUTION
// class Solution {
// private:
//     bool isValid=true;
//     long curr=LONG_MIN;

// public:
//     bool isValidBST(TreeNode* root) {
//         if(!root)
//             return true;
        
//         if(!isValid)
//             return false;

//         isValidBST(root->left);
//         if((long)root->val <= curr)
//             isValid=false;
//         curr = root->val;
//         isValidBST(root->right);
//         return isValid;
//     }
// };