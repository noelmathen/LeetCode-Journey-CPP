class Solution {
  public:
    void getBfs(int node, vector<vector<int>> &adj, int* visited, vector<int>& result){
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        while(!q.empty()){
            int popNode = q.front();
            q.pop();
            result.push_back(popNode);
            for(auto neighbour : adj[popNode]){
                if(!visited[neighbour]){
                    visited[neighbour] = 1;
                    q.push(neighbour);
                }
            }
        }
    }
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int v = adj.size();
        int visited[v]={0};
        vector<int> result;
        getBfs(0, adj, visited, result);
        return result;
    }
};
