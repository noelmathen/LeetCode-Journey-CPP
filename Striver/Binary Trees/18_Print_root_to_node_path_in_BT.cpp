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
        bool isLeaf(TreeNode* root){
            return (!root->left && !root->right);
        }

        void traverse(TreeNode* root, vector<int>& arr, vector<vector<int>>& result){
            if(!root){
                return;
            }

            arr.push_back(root->data);
            if(isLeaf(root)){
                result.push_back(arr);
                arr.pop_back();
                return;
            }

            traverse(root->left, arr, result);
            traverse(root->right, arr, result);
            arr.pop_back();

        }

		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<int> arr;
            vector<vector<int>> result;
            traverse(root, arr, result);
            return result;
		}
};