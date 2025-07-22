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

// class Solution{
//     private:
//         void inorder(TreeNode* root, vector<int> &result){
//             if(root==NULL)
//                 return;
//             inorderTraversal(root->left, result);
//             result.push_back(root->val);
//             inorderTraversal(root->right, result);
// 		}

// 	public:
// 		vector<int> inorderTraversal(TreeNode* root){
// 	        vector<int> result;
//             inorder(root, result);
//             return result;
// 		}
// };

class Solution{
	public:
		vector<int> inorderTraversal(TreeNode* root){
	        stack<TreeNode*> stk;
            TreeNode* node=root;
            vector<int> result;
            while(1){
                if(node!=NULL){
                    stk.push(node);
                    node = node->left;
                }
                else{
                    if(stk.empty())
                        break;
                    node = stk.top();
                    stk.pop();
                    result.push_back(node->val);
                    node = node->right;
                }
            }
            return result;
		}
};