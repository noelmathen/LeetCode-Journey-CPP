/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string addString(TreeNode* node){
        if(!node)
            return " N";
        return " " + to_string(node->val);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)
            return "";
        
        string str;

        queue<TreeNode*> q;
        q.push(root);
        str.append(to_string(root->val));
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();

                str.append(addString(node->left));
                if(node->left)
                    q.push(node->left);
                    
                str.append(addString(node->right));
                if(node->right)
                    q.push(node->right);
            }
        }
        // cout<<str<<endl;
        return str;
    }

    int getData(string& data, int& i){
        string str;
        if(data[i]=='N'){
            i+=2;
            return -1001;
        }
        
        bool isNegative=false;
        if(data[i]=='-'){
            i++;
            isNegative=true;
        }
        while(data[i]!=' '){
            str.push_back(data[i]);
            i++;
        }
        i++;

        if(isNegative)
            return stoi(str)*-1;

        return stoi(str);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="")
            return NULL;

        int i=0;
        TreeNode* root = new TreeNode(getData(data, i));
        
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            for(int j=0; j<n; j++){
                TreeNode* node = q.front();
                q.pop();

                int left = getData(data, i);
                if(left==-1001){
                    node->left=NULL;
                }
                else{
                    node->left = new TreeNode(left);
                    q.push(node->left);
                }
                    

                int right = getData(data, i);
                if(right==-1001)
                    node->right=NULL;
                else{
                    node->right =  new TreeNode(right);
                    q.push(node->right);
                }
            }
        }

        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));