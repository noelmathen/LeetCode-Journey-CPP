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
    TreeNode* findLarge(TreeNode* root){
        while(root->right)
            root = root->right;
        return root;
    }

    TreeNode* deleteHelper(TreeNode* root){
        if(!root->left)
            return root->right;
        if(!root->right)
            return root->left;
        
        TreeNode* largettLeftSubTreeNode = findLarge(root->left);
        TreeNode* rightChild = root->right;
        
        largettLeftSubTreeNode->right = rightChild;
        return root->left;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* originalRoot = root;
        if(!root)
            return NULL;
        
        if(root->val==key)
            return deleteHelper(root);

        while(root){
            if(key<root->val){
                if(root->left && root->left->val==key){
                    root->left = deleteHelper(root->left);
                    break;
                }
                else
                    root = root->left;
            }
            else{
                if(root->right && root->right->val==key){
                    root->right = deleteHelper(root->right);
                    break;
                }
                else
                    root = root->right;
            }
        }

        return originalRoot;
    }
};



// MY STUPID SOLUTION(But still the TC and SC is good)
// class Solution {
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         TreeNode* originalRoot=root;
//         TreeNode* prev=root;
//         TreeNode* temp;
//         //Finding if key exists or not
//         while(root && root->val!=key){
//             prev = root;
//             if(key > root->val)
//                 root = root->right;
//             else
//                 root = root->left;
            
//         }

//         //if there is no key
//         if(!root)
//             return originalRoot;

//         //Cases after key is found

//         //Leaf Node
//         if(!root->left && !root->right){
//             if(key==originalRoot->val){
//                 return NULL;
//             }
//             if(prev->right==root){
//                 prev->right=NULL;
//                 delete root;
//             }
//             if(prev->left==root){
//                 prev->left=NULL;
//                 delete root;
//             }
//         }

//         else if(!root->left && root->right){
//             if(key==originalRoot->val){
//                 return originalRoot->right;
//             }
//             if(prev->right==root){
//                 prev->right=root->right;
//                 root->right=NULL;
//                 delete root;
//             }
//             if(prev->left==root){
//                 prev->left=root->right;
//                 root->left=NULL;
//                 delete root;
//             }
//         }

//         else if(root->left && !root->right){
//             if(key==originalRoot->val){
//                 return originalRoot->left;
//             }
//             if(prev->right==root){
//                 prev->right=root->left;
//                 root->left=NULL;
//                 delete root;
//             }
//             if(prev->left==root){
//                 prev->left=root->left;
//                 root->left=NULL;
//                 delete root;
//             }
//         }
        
//         else if(root->left && root->right){
//             TreeNode* temp=prev->right;
            
//             TreeNode* leftChild = root->left;
//             TreeNode* rightChild = root->right;
//             int ceil=INT_MAX;
//             TreeNode* ceilNode = rightChild;
//             while(rightChild!=NULL){
//                 if(rightChild->val>=leftChild->val && rightChild->val<ceil){
//                     ceil = rightChild->val;
//                     ceilNode = rightChild;
//                 }

//                 if(leftChild->val > rightChild->val)
//                     rightChild = rightChild->right;
//                 else
//                     rightChild = rightChild->left;
//             }
//             ceilNode->left = leftChild;
            
            

//             if(prev->right==root){
//                 prev->right=root->right;
//                 root->left=NULL;
//                 delete root;
//             }
//             if(prev->left==root){
//                 prev->left=root->right;
//                 root->left=NULL;
//                 delete root;
//             }
//             if(key==originalRoot->val){
//                 return temp;
//             }
//         }

//         return originalRoot;
//     }
// };