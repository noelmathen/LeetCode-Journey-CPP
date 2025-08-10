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

class BSTIterator{
private:
    stack<TreeNode*> prevStk;
    stack<TreeNode*> nextStk;

public:
    void goLeft(TreeNode* root){
        while(root){
            nextStk.push(root);
            root = root->left;
        }
    }

    void goRight(TreeNode* root){
        while(root){
            prevStk.push(root);
            root = root->right;
        }
    }

    int next(){
        TreeNode* node = nextStk.top();
        nextStk.pop();
        if(node->right)
            goLeft(node->right);
        return node->val;
    }

    int prev(){
        TreeNode* node = prevStk.top();
        prevStk.pop();
        if(node->left)
            goRight(node->left);
        return node->val;
    }

    BSTIterator(TreeNode* root){
        TreeNode* leftRoot = root;
        goLeft(leftRoot);
        goRight(root);
    }


};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        BSTIterator* itr = new BSTIterator(root);
        
        int left = itr->next(), right = itr->prev();
        while(left<right){
            if(left + right == k)
                return true;
            else if(left + right < k)
                left = itr->next();
            else
                right = itr->prev();
        }
        return false;
    }
};



// // BRUTE FORCE SOLUTION
// class Solution {
// private:
//     vector<int> nodes;
// public:
//     void inorder(TreeNode* root){
//         if(!root)
//             return;
        
//         inorder(root->left);
//         nodes.push_back(root->val);
//         inorder(root->right);
//     }

//     bool findTarget(TreeNode* root, int k) {
//         inorder(root);
//         int n = nodes.size();
//         unordered_set<int> sett;
//         for(int i=0; i<n; i++){
//             if(sett.find(k-nodes[i]) != sett.end())
//                 return true;
//             sett.insert(nodes[i]);
//         }
//         return false;
//     }
// };