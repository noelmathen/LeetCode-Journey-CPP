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
        void traverse(TreeNode* root, vector<int> &inorder,vector<int> & preorder,vector<int> & postorder){
            if(!root)
                return;
            
            preorder.push_back(root->data);
            traverse(root->left, inorder, preorder, postorder);
            inorder.push_back(root->data);
            traverse(root->right, inorder, preorder, postorder);
            postorder.push_back(root->data);
        }

		vector<vector<int> > treeTraversal(TreeNode* root){
			vector<int> inorder, preorder, postorder;
            traverse(root, inorder, preorder, postorder);
            return {inorder, preorder, postorder};
		}
};