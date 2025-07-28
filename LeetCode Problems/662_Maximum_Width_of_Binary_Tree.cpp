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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        int width=0;
        q.push({root, 0});

        while(!q.empty()){
            int n = q.size();
            long long minLevelIndex = (q.front()).second;
            int first=0, last=0;
            for(int i=0; i<n; i++){
                TreeNode* node = (q.front()).first;
                long long index = (q.front()).second - minLevelIndex;
                q.pop();

                if(i==0)
                    first = index;
                if(i==n-1)
                    last = index;
                if(node->left)
                    q.push({node->left, 2*index+1});
                if(node->right)
                    q.push({node->right, 2*index+2});
            }
            width = max(width, last-first+1);
        }
        return width;
    }
};