/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    void traverse(TreeNode* root, int level, map<int, int>& mapp){
        if(!root)
            return;
        
        mapp[level] = root->val;
        traverse(root->left, level+1, mapp);
        traverse(root->right, level+1, mapp);
    }
    vector<int> rightSideView(TreeNode* root) {
        map<int, int> mapp;
        vector<int> result;
        traverse(root, 0, mapp);

        for(auto x : mapp){
            result.push_back(x.second);
        }
        return result;
    }
};