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
    void findVerticalTraversal(TreeNode* root,  map<int, map<int, multiset<int>>> &mapp, int row, int col){
        if(!root)
            return;

        mapp[col][row].insert(root->val);    
        findVerticalTraversal(root->left, mapp, row+1, col-1);
        findVerticalTraversal(root->right, mapp, row+1, col+1);

    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        map<int, map<int, multiset<int>>> mapp;
        findVerticalTraversal(root, mapp, 0, 0);

        for(auto x : mapp){
            vector<int> arr;
            for(auto y : x.second){
                for (int z : y.second) {
                    arr.push_back(z);
                }
            }
            result.push_back(arr);
        }

        return result;
    }
};