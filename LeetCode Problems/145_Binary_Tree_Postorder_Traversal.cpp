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
//         void postorder(TreeNode* root, vector<int> &result){
//             if(root==NULL)
//                 return;
//             postorderTraversal(root->left, result);
//             postorderTraversal(root->right, result);
//             result.push_back(root->val);
// 		}

// 	public:
// 		vector<int> postorderTraversal(TreeNode* root){
// 	        vector<int> result;
//             postorder(root, result);
//             return result;
// 		}
// };

class Solution{
	public:
		vector<int> postorderTraversal(TreeNode* root){
	        stack<TreeNode*> stk;
            TreeNode* node=root;
            vector<int> result;
            while(1){
                if(node!=NULL){
                    result.push_back(node->val);
                    stk.push(node);
                    node = node->right;
                }
                else{
                    if(stk.empty())
                        break;
                    node = stk.top();
                    stk.pop();
                    node = node->left;
                }
            }
            reverse(result.begin(), result.end());
            return result;
		}
};
