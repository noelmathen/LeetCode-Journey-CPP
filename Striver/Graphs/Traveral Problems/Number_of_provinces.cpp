class Solution{
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited){
        visited[node] = 1;
        for(int i=0; i<adj.size(); i++){
            if(adj[node][i]==1 && !visited[i])
                dfs(i, adj, visited);
        }
    }

    int numProvinces(vector<vector<int>> adj) {
       int provinces=0, n = adj.size();
       vector<int> visited(n, 0);
       for(int i=0; i<n; i++){
            if(!visited[i]){
                provinces++;
                dfs(i, adj, visited);
            }
       }
       return provinces;
    }
};
