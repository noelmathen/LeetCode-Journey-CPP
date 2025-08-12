/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int data) : val(data) , left(nullptr) , right(nullptr) {}
 * };
 **/

class NodeVal{
    public:
        int nodeNumbers;
        int minVal;
        int maxVal;
    
    NodeVal(int x, int y, int z){
        this->nodeNumbers = x;
        this->minVal = y;
        this->maxVal = z;
    }
};

class Solution{
	public:
        NodeVal findLargestBST(TreeNode* root){
            if(!root)
                return NodeVal(0, INT_MAX, INT_MIN);

            auto left = findLargestBST(root->left);
            auto right = findLargestBST(root->right);

            if(root->val > left.maxVal && root->val < right.minVal){
                return NodeVal(
                    1+left.nodeNumbers+right.nodeNumbers, 
                    min(left.minVal,root->val), 
                    max(right.maxVal,root->val)
                );
            }
                
            
            return NodeVal(
                max(left.nodeNumbers,right.nodeNumbers), 
                INT_MIN, 
                INT_MAX
            );
        }

		int largestBSTSubTree(TreeNode* root){
			return findLargestBST(root).nodeNumbers;
		}
};