/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

// class Solution{
// 	public:
//         void preorderTraversal(TreeNode* root, vector<int> &result){
//             if(root==NULL)
//                 return;
//             result.push_back(root->data);
//             preorderTraversal(root->left, result);
//             preorderTraversal(root->right, result);
//         }

// 		vector<int> preorder(TreeNode* root){
// 	       vector<int> result;
//            preorderTraversal(root, result);
//            return result;
// 		}
// };

class Solution{
	public:
		vector<int> preorder(TreeNode* root){
	        stack<TreeNode*> stk;
            TreeNode* node=root;
            vector<int> result;
            while(1){
                if(node!=NULL){
                    result.push_back(node->data);
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