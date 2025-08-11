/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/


class Solution {
private:
    int count=0;
    TreeNode* prev = new TreeNode(INT_MIN);
    TreeNode* left = new TreeNode(INT_MIN);
    TreeNode* right = new TreeNode(INT_MIN);

public:
    void swapNodes(TreeNode* left, TreeNode* right){
        TreeNode* temp = new TreeNode(left->data);
        left->data = right->data;
        right->data = temp->data;
        delete temp;
    }

    void traverse(TreeNode* root){
        if(!root)
            return;
        
        traverse(root->left);

        if(prev->data > root->data){
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