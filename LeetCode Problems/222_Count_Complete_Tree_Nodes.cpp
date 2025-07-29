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

// // BRUTE FORCE SOLUTION - O(n) TC
// class Solution {
// public:
//     void traverse(TreeNode* root, int &count){
//         if(!root)
//             return;
//         count++;
//         traverse(root->left, count);
//         traverse(root->right, count);
//     }

//     int countNodes(TreeNode* root) {
//         int count=0;
//         traverse(root, count);
//         return count;
//     }
// };


// OPTIMAL SOLUTION - O(log(n)^2) TC
class Solution {
public:
    int findLeftHeight(TreeNode* root){
        int height=0;
        while(root){
            root = root->left;
            height++;
        }
        return height;
    }

    int findRightHeight(TreeNode* root){
        int height=0;
        while(root){
            root = root->right;
            height++;
        }
        return height;
    }
    
    int traverse(TreeNode* root){
        if(!root)
            return 0;
        int lh = findLeftHeight(root);
        int rh = findRightHeight(root);

        if(lh==rh)
            return (1<<lh)-1;
            // return (2*lh)-1;
        
        return 1 + traverse(root->left) + traverse(root->right);
    }


    int countNodes(TreeNode* root) {
        return traverse(root);
    }
};