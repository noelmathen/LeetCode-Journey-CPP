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
    vector<int> bottomView(TreeNode *root){
        vector<int> result;
        queue<pair<TreeNode*, int>> q;
        map<int, int> mapp;
        int level=0;
        q.push({root, level});

        while(!q.empty()){
            
            int n = q.size();

            for(int i=0; i<n; i++){
                TreeNode* node = q.front().first;
                level = q.front().second;

                mapp[level] = node->data;
                
                q.pop();
                if(node->left)
                    q.push({node->left, level-1});
                if(node->right)
                    q.push({node->right, level+1});
            }
        }
        for(auto x : mapp){
            result.push_back(x.second);
        }
        
        return result;

    }
};