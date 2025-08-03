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
    vector<int> preorder(TreeNode* root) {
    	vector<int> preorder;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left == NULL){
                preorder.push_back(curr->data);
                curr = curr->right;
            }
            else{
                TreeNode* next = curr->left;
                while(next->right && next->right!=curr)
                    next = next->right;
                
                if(next->right==NULL){
                    next->right = curr;
                    preorder.push_back(curr->data);
                    curr = curr->left;
                }
                else{
                    next->right=NULL;
                    curr = curr->right;
                }
            }
        }
        return preorder;
    }
};