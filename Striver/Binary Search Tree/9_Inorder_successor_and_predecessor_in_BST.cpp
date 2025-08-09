/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
		vector<int> succPredBST(TreeNode* root,int key){
			TreeNode* originalRoot=root;
            int succ=-1, pred=-1;

            // Finding predecessor
            while(root!=NULL){
                if(key <= root->data){
                    root = root->left;
                }
                else{
                    pred = root->data;
                    root = root->right;
                }  
            }

            // Finding successor
            root = originalRoot;
            while(root!=NULL){
                if(key >= root->data)
                    root = root->right;
                else{
                    succ = root->data;
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
//                 originalNext = root->data;
//             if(root->data==key)
//                 originalPrev = prev;
//             prev = root->data;

//             inorder(root->right, key, prev);
//         }

// 		vector<int> succPredBST(TreeNode* root,int key){
// 			int prev=-1;

//             inorder(root, key, prev);
//             return {originalPrev, originalNext};
// 		}
// };