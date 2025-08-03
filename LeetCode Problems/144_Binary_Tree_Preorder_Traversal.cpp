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

// // RECURSIVE SOLUTION
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



// // ITERATIVE SOLUTION
// class Solution{
// 	public:
// 		vector<int> preorderTraversal(TreeNode* root){
// 	        stack<TreeNode*> stk;
//             TreeNode* node=root;
//             vector<int> result;
//             while(1){
//                 if(node!=NULL){
//                     result.push_back(node->val);
//                     stk.push(node);
//                     node = node->left;
//                 }
//                 else{
//                     if(stk.empty())
//                         break;
//                     node = stk.top();
//                     stk.pop();
//                     node = node->right;
//                 }
//             }
//             return result;
// 		}
// };




// MORRIS PREORDER TRAVERSAL
class Solution{
public:
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> preorder;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left == NULL){
                preorder.push_back(curr->val);
                curr = curr->right;
            }
            else{
                TreeNode* next = curr->left;
                while(next->right && next->right!=curr)
                    next = next->right;
                
                if(next->right==NULL){
                    next->right = curr;
                    preorder.push_back(curr->val);
                    curr = curr->left;
                }
                else{
                    next->right=NULL;
                    curr = curr->right;
                }
            }
        }
        return preorder;
    }
};
