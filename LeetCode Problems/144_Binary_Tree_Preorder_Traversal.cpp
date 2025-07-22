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
//         void preorder(TreeNode* root, vector<int> &result){
//             if(root==NULL)
//                 return;
//             result.push_back(root->val);
//             preorderTraversal(root->left, result);
//             preorderTraversal(root->right, result);
// 		}

// 	public:
// 		vector<int> preorderTraversal(TreeNode* root){
// 	        vector<int> result;
//             preorder(root, result);
//             return result;
// 		}
// };

class Solution{
	public:
		vector<int> preorderTraversal(TreeNode* root){
	        stack<TreeNode*> stk;
            TreeNode* node=root;
            vector<int> result;
            while(1){
                if(node!=NULL){
                    result.push_back(node->val);
                    stk.push(node);
                    node = node->left;
                }
                else{
                    if(stk.empty())
                        break;
                    node = stk.top();
                    stk.pop();
                    node = node->right;
                }
            }
            return result;
		}
};
