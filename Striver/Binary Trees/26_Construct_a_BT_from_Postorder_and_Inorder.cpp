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
private:
    unordered_map<int, int> mapp;
    int postIndex;
public:
    TreeNode* makeTree(vector<int>& postOrder, int inStart, int inEnd){
        if(inStart > inEnd)
            return NULL;
        
        TreeNode* root = new TreeNode(postOrder[postIndex--]);
        int inPos = mapp[root->data];

        root->right = makeTree(postOrder, inPos+1, inEnd);
        root->left = makeTree(postOrder, inStart, inPos-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        for(int i=0; i<n; i++)
            mapp[inorder[i]] = i;
        
        postIndex=n-1;
        return makeTree(postorder, 0, n-1);
    }
};