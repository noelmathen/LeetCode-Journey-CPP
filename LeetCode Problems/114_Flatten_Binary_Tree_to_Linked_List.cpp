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

// //USES NEW LINKED LIST
// class Solution {
// public:
//     void traverse(TreeNode* root, TreeNode*& tail){
//         if(!root) return;

//         tail->right = new TreeNode(root->val);
//         tail->left = NULL;

//         tail = tail->right;

//         traverse(root->left, tail);
//         traverse(root->right, tail);
//     }

//     void flatten(TreeNode* root) {
//         if(!root) return;

//         TreeNode* dummy = new TreeNode(-1); 
//         TreeNode* tail = dummy;  

//         traverse(root, tail);

//         root->left = NULL;
//         root->right = dummy->right->right;
        
//         delete dummy;
//     }
// };


// //IN PLACE, BUT STILL USES EXTRA SPACE
// class Solution {
// private:
//     TreeNode* prev=NULL;

// public:
//     void flatten(TreeNode* root) {
//         if(!root)
//             return;
        
//         flatten(root->right);
//         flatten(root->left);

//         root->right = prev;
//         root->left=NULL;

//         prev = root;
//     }
// };



//MORRIS TRAVERSAL - O(1) SPACE
class Solution {
private:
    TreeNode* prev=NULL;

public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        while(curr != NULL){
            if(curr->left != NULL){
                prev = curr->left;
                while(prev->right)
                    prev = prev->right;
                
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};