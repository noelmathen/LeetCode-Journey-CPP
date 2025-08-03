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
    vector<int> getInorder(TreeNode* root) {
    	vector<int> inorder;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left == NULL){
                inorder.push_back(curr->data);
                curr = curr->right;
            }
            else{
                TreeNode* next = curr->left;
                while(next->right && next->right!=curr)
                    next = next->right;
                
                if(next->right==NULL){
                    next->right = curr;
                    curr = curr->left;
                }
                else{
                    next->right=NULL;
                    inorder.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return inorder;
    }
};