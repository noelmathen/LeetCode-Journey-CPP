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
    vector<vector<int> > levelOrder(TreeNode* root) {
        if(!root)
            return {};

        vector<vector<int>> result;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()){
            vector<TreeNode*> arr;
            vector<int> intArr;
            while(!q.empty()){
                arr.push_back(q.front());
                q.pop();
            }
            for(int i=0; i<arr.size(); i++){
                intArr.push_back(arr[i]->data);
                if(arr[i]->left)
                    q.push(arr[i]->left);
                if(arr[i]->right)
                    q.push(arr[i]->right);
            }
            result.push_back(intArr);
        }
        return result;
    }
};