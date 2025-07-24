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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);
        bool zigzag=true;
        while(!q.empty()){
            int n = q.size();
            vector<int> arr(n);
            // cout<<endl;

            for(int i=0; i<n; i++){
                TreeNode* node = q.front(); 
                q.pop(); 
                if(!zigzag)
                    arr[n-i-1] = node->val; 
                else
                    arr[i] = node->val; 
                // cout<<arr[i]<<" ";
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            zigzag = !zigzag;
            result.push_back(arr);
        }
        return result;
    }
};