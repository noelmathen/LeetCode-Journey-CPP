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
		int timeToBurnTree(TreeNode* root, int start){
            unordered_map<TreeNode*, TreeNode*> mapp;
            mapp[root] = NULL;

            queue<TreeNode*> q1;
            q1.push(root);
            
            TreeNode* target;

            while(!q1.empty()){
                int n = q1.size();
                for(int i=0; i<n; i++){
                    TreeNode* node = q1.front();
                    q1.pop();
                    
                    if(node->data == start)
                        target = node;
                    
                    if(node->left){
                        q1.push(node->left);
                        mapp[node->left] = node;
                    }
                    if(node->right){
                        q1.push(node->right);
                        mapp[node->right] = node;
                    }
                }
            }

            set<TreeNode*> visited;
            visited.insert(target);

            queue<TreeNode*> q2;
            q2.push(target);

            int count=-1;

            while(!q2.empty()){
                int n = q2.size();
                for(int i=0; i<n; i++){
                    TreeNode* node = q2.front();
                    q2.pop();
                    if(node->left && visited.find(node->left) == visited.end()){
                        q2.push(node->left);
                        visited.insert(node->left);
                    }
                    if(node->right && visited.find(node->right) == visited.end()){
                        q2.push(node->right);
                        visited.insert(node->right);
                    }
                    if(mapp[node]!=NULL && visited.find(mapp[node]) == visited.end()){
                        q2.push(mapp[node]);
                        visited.insert(mapp[node]);
                    }
                }
                count++;
            }

            return count;
		}	
};