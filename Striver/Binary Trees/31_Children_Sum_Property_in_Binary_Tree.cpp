/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
private:
    int sum=0;

public:
    bool checkChildrenSum(TreeNode* root) {
        if(!root)
            return true;
        
        //take care of leaf nodes seperately
        if(!root->right && !root->left)
            return true;
        
        int leftVal=0, rightVal=0;

        if(root->left)
            leftVal = root->left->val;
        if(root->right)
            rightVal = root->right->val;
        
        if(root->val != leftVal + rightVal) 
            return false;

        return checkChildrenSum(root->left) && checkChildrenSum(root->right);        
    }
};
