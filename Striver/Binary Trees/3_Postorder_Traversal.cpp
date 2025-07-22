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
//         void postorderTraversal(TreeNode* root, vector<int> &result){
//             if(root==NULL)
//                 return;
//             postorderTraversal(root->left, result);
//             postorderTraversal(root->right, result);
//             result.push_back(root->data);
//         }

// 		vector<int> postorder(TreeNode* root){
// 	       vector<int> result;
//            postorderTraversal(root, result);
//            return result;
// 		}
// };

class Solution{
	public:
		vector<int> postorder(TreeNode* root){
	        stack<TreeNode*> stk;
            TreeNode* node=root;
            vector<int> result;
            while(1){
                if(node!=NULL){
                    result.push_back(node->data);
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