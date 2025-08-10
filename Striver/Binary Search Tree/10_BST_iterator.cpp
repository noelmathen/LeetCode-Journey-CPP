/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/


// STRIVER SOLUTION - O(1) time and O(h) Space
class BSTIterator {
private:
    stack<TreeNode*> stk;
public:
    void pushLeftNodes(TreeNode* root){
        while(root){
            stk.push(root);
            root = root->left;
        }
    }

    BSTIterator(TreeNode* root) {
        pushLeftNodes(root);
    }
    
    int next() {
        TreeNode* node = stk.top();
        stk.pop();
        if(node->right)
            pushLeftNodes(node->right);
        return node->data;
    }
    
    bool hasNext() {
        return !stk.empty();
    }
};



// MY SOLUTION - O(1) time and O(n) Space
// class BSTIterator {
// private:
//     vector<int> nodes;
//     int pointer;
// public:
//     void traverse(TreeNode* root){
//         if(!root)
//             return;
//         traverse(root->left);
//         nodes.push_back(root->data);
//         traverse(root->right);
//     }

//     BSTIterator(TreeNode* root) {
//         traverse(root);
//         pointer=-1;
//     }
    
//     int next() {
//         return nodes[++pointer];
//     }
    
//     bool hasNext() {
//         return pointer+1<nodes.size();
//     }
// };



/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */