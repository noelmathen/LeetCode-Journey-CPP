/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void buildGraph(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& mapp){
        queue<TreeNode*> q;
        q.push(root);
        mapp[root] = NULL;
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                    mapp[node->left] = node;
                }
                if(node->right){
                    q.push(node->right);
                    mapp[node->right] = node;
                }
            }
        }
    }

    void findDistanceK(TreeNode* root, int k, set<TreeNode*>& visited, queue<TreeNode*>& q, unordered_map<TreeNode*, TreeNode*>& mapp, int count){
        q.push(root);
        visited.insert(root);
        while(count<k){
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    if(visited.find(node->left) == visited.end()){
                        q.push(node->left);
                        visited.insert(node->left);
                    }
                }
                if(node->right){
                   if(visited.find(node->right) == visited.end()){
                        q.push(node->right);
                        visited.insert(node->right);
                    }
                }
                if(mapp[node]!=NULL){
                    if(visited.find(mapp[node]) == visited.end()){
                        q.push(mapp[node]);
                        visited.insert(mapp[node]);
                    }
                }
            }
            count++;
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> mapp;
        
        buildGraph(root, mapp);

        set<TreeNode*> visited;
        queue<TreeNode*> q;

        findDistanceK(target, k, visited, q, mapp, 0);
        
        vector<int> result;
        while(!q.empty()){
            result.push_back(q.front()->val);
            q.pop();
        }

        return result;
    }
};