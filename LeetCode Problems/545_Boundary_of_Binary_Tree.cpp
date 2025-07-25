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

class Solution{
public:
    void findLeft(TreeNode* root, vector<int>& result){
        if(!root){
            return;
        }

        if(root->left || root->right)
            result.push_back(root->val);
        
        if(root->left)
            findLeft(root->left, result);
        else
            findLeft(root->right, result);
    
    }

    void leafBoundary(TreeNode* root, vector<int>& result){
        if(!root){
            return;
        }

        //pre-order traversal
        if(!root->left && !root->right)
            result.push_back(root->val);
        leafBoundary(root->left, result);
        leafBoundary(root->right, result);
    }

    void findRight(TreeNode* root, vector<int>& result){
        if(!root){
            return;
        }

        if(root->right)
            findRight(root->right, result);
        else
            findRight(root->left, result);
        
        //add nodes when going back(post-order traversal)
        if(root->left || root->right)
            result.push_back(root->val);
    }
    
    


    vector <int> boundary(TreeNode* root){
    	vector<int> result;
        bool foundEnd=false;
        if(!root)
            return {};
        
        //Not a leaf node
        if(root && (root->left || root->right))
            result.push_back(root->val);

        findLeft(root->left, result);
        leafBoundary(root, result);
        findRight(root->right, result);
    
        return result;
    }
};