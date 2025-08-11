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
private:
    int count=0;
    TreeNode* prev = new TreeNode(INT_MIN);
    TreeNode* left = new TreeNode();
    TreeNode* right = new TreeNode();

public:
    void swapNodes(TreeNode* left, TreeNode* right){
        TreeNode* temp = new TreeNode(left->val);
        left->val = right->val;
        right->val = temp->val;
        delete temp;
    }

    void traverse(TreeNode* root){
        if(!root)
            return;
        
        traverse(root->left);

        if(prev->val > root->val){
            count++;
            if(count==1){
                left = prev;
                right = root;
            }
            else if(count==2){
                right = root;
            }
        }
            
        prev = root;
        traverse(root->right);
    }

    void recoverTree(TreeNode* root) {
        traverse(root);
        swapNodes(left, right);
    }
};