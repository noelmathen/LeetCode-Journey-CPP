class Solution {
public:
    vector<int> floorCeilOfBST(TreeNode* root, int key) {
        int floor=-1, ceil=INT_MAX;

        while(root){
            //finding floor
            if(root->data>floor && root->data<=key)
                floor = root->data;

            // findling ceil
            if(root->data<ceil && root->data>=key)
                ceil = root->data;

            //traversing
            if(key > root->data)
                root = root->right;
            else
                root = root->left;
        }

        if(ceil==INT_MAX)
            ceil=-1;
        return {floor, ceil};
    }
};