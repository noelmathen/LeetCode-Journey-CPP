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
    void findLeft(TreeNode* root, vector<int>& result){
        if(!root){
            return;
        }

        if(root->left || root->right)
            result.push_back(root->data);
        
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
            result.push_back(root->data);
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
            result.push_back(root->data);
    }
    
    


    vector <int> boundary(TreeNode* root){
    	vector<int> result;
        bool foundEnd=false;
        if(!root)
            return {};
        
        //Not a leaf node
        if(root && (root->left || root->right))
            result.push_back(root->data);

        findLeft(root->left, result);
        leafBoundary(root, result);
        findRight(root->right, result);
    
        return result;
    }
};