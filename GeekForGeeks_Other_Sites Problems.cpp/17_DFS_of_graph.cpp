class Solution {
  public:
    void getDfs(int node, vector<vector<int>>& adj, int* visited, vector<int>& result){
        visited[node] = 1;
        result.push_back(node);
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                getDfs(neighbour, adj, visited, result);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        int visited[v] = {0};
        vector<int> result;
        getDfs(0, adj, visited, result);
        return result;
    }
};
