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
//     private:
//         void inorderTraversal(TreeNode* root, vector<int> &result){
//             if(root==NULL)
//                 return;
//             inorderTraversal(root->left, result);
//             result.push_back(root->data);
//             inorderTraversal(root->right, result);
// 		}

// 	public:
// 		vector<int> inorder(TreeNode* root){
// 	        vector<int> result;
//             inorderTraversal(root, result);
//             return result;
// 		}
// };

class Solution{
	public:
		vector<int> inorder(TreeNode* root){
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
                    result.push_back(node->data);
                    node = node->right;
                }
            }
            return result;
		}
};