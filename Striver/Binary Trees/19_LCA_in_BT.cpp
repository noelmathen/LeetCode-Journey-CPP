/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

//MY SOLUTION(Uses O(n) space, coz im stupid)
//  class Solution {
// public:
//     void traverse(TreeNode* root, TreeNode* p, TreeNode* q, vector<TreeNode*>& pPath, vector<TreeNode*>& qPath, vector<TreeNode*>& path){
//         if(!root)
//             return;
        
//         path.push_back(root);
//         if(root == p)
//             pPath = path;
        
//         if(root == q)
//             qPath = path;

//         traverse(root->left, p, q, pPath, qPath, path);
//         traverse(root->right, p, q, pPath, qPath, path);
//         path.pop_back();

//     }

//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*> pPath, qPath,path;
//         traverse(root, p, q, pPath, qPath, path);
        
//         // for(auto x : pPath){
//         //     cout<<x->data<<" ";
//         // }
//         // cout<<endl;
//         // for(auto y : qPath){
//         //     cout<<y->data<<" ";
//         // }

//         int m = pPath.size();
//         int n = qPath.size();
//         n = min(m, n);
//         for(int i=n-1; i>=0; i--){
//             if(pPath[i]->data == qPath[i]->data)
//                 return pPath[i];
//         }

//         return root;
//     }
// };



//OPTIMAL SOLUTION(O(1) space itself)
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q)
            return root;
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(!left)
            return right;
        else if(!right)
            return left;
        else    
            return root;
    }
};