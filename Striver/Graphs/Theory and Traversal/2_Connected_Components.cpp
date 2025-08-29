class Solution {
  public:
    void dfs(int node, vector<int> adj[], vector<int>& visited){
      visited[node] = 1;
      for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, adj, visited);
        }
      }
    }

    int findNumberOfComponent(int V, vector<vector<int>> &edges) {
        vector<int> adj[V];
        vector<int> visited(V, 0);
        int E = edges.size();
        int count=0;

        for(int i=0; i<E; i++){
          adj[edges[i][0]].push_back(edges[i][1]);
          adj[edges[i][1]].push_back(edges[i][0]);
        }

        for(int i=0; i<V; i++){
          if(!visited[i]){
            count++;
            dfs(i, adj, visited);
          }
        }
      return count;
    }
};