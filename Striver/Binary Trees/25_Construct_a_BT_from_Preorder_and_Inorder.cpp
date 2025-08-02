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

// // STRIVERS SOLUTION
// class Solution {
// public:
//     TreeNode* makeTree(vector<int>& preorder, int preStart,  int preEnd, vector<int>& inorder, int inStart,  int inEnd, unordered_map<int, int>& mapp){ 
//         if(preStart>preEnd || inStart>inEnd)
//             return NULL;

//         TreeNode* root = new TreeNode(preorder[preStart]);
        
//         int inRoot = mapp[root->val];
//         int numsLeft = inRoot - inStart;

//         root->left = makeTree(preorder, preStart+1, preStart+numsLeft, inorder, inStart, inRoot-1, mapp);
//         root->right = makeTree(preorder, preStart+numsLeft+1, preEnd, inorder, inRoot+1, inEnd, mapp);

//         return root;
//     }

//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         unordered_map<int, int> mapp;
//         int n = inorder.size();
//         for(int i=0; i<n; i++)
//             mapp[inorder[i]]=i;
        
//         TreeNode* root = makeTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mapp);
//         return root;
//     }
// };



//BETTER SOLUTION
class Solution {
private:
    unordered_map<int, int> mapp;
    int preIndex=0;

public:
    TreeNode* makeTree(vector<int>& preOrder, int inStart, int inEnd){
        if(inStart > inEnd)
            return NULL;
        
        TreeNode* root = new TreeNode(preOrder[preIndex++]);
        int inPos = mapp[root->val];

        root->left = makeTree(preOrder, inStart, inPos-1);
        root->right = makeTree(preOrder, inPos+1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++){
            mapp[inorder[i]] = i;
        }
        
        return makeTree(preorder, 0, inorder.size()-1);
    }
};