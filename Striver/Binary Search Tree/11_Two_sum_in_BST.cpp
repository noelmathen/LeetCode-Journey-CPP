/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/


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
        return node->data;
    }

    int prev(){
        TreeNode* node = prevStk.top();
        prevStk.pop();
        if(node->left)
            goRight(node->left);
        return node->data;
    }

    BSTIterator(TreeNode* root){
        TreeNode* leftRoot = root;
        goLeft(leftRoot);
        goRight(root);
    }


};

class Solution {
public:
    bool twoSumBST(TreeNode* root, int k) {
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
//         nodes.push_back(root->data);
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