/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{	
	public:
		TreeNode* lca(TreeNode* root, int p, int q){
	        while(root){
                if(p < root->data && q < root->data)
                    root = root->left;
                else if(p > root->data && q > root->data)
                    root = root->right;
                else
                    return root;
            }
            return root;
		}
};