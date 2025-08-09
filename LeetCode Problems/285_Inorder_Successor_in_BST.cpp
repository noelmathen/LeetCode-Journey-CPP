/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int data) : val(data) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
		vector<int> succBST(TreeNode* root,int key){
			TreeNode* originalRoot=root;
            int succ=-1, pred=-1;

            // Finding predecessor
            while(root!=NULL){
                if(key <= root->val){
                    root = root->left;
                }
                else{
                    pred = root->val;
                    root = root->right;
                }  
            }

            // Finding successor
            root = originalRoot;
            while(root!=NULL){
                if(key >= root->val)
                    root = root->right;
                else{
                    succ = root->val;
                    root = root->left;
                }
            }
            return {pred, succ};
		}
};


// MY BRUTE FORCE SOLUTION(O(n))
// class Solution{
//     private:
//         int originalPrev=-1, originalNext=-1;

// 	public:
//         void inorder(TreeNode* root, int key, int& prev){
//             if(!root)
//                 return;
            
//             inorder(root->left, key, prev);
            
//             if(prev == key)
//                 originalNext = root->val;
//             if(root->val==key)
//                 originalPrev = prev;
//             prev = root->val;

//             inorder(root->right, key, prev);
//         }

// 		vector<int> succPredBST(TreeNode* root,int key){
// 			int prev=-1;

//             inorder(root, key, prev);
//             return {originalPrev, originalNext};
// 		}
// };