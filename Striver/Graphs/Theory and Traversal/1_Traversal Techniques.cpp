class Solution {
  private:
    void dfs(int node, vector<int> adj[], vector<int>& visited, vector<int>& dfsList){
      visited[node] = 1;
      dfsList.push_back(node);
      for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
          dfs(neighbour, adj, visited, dfsList);
        }
      }
    }


  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<int> visited(V, 0);
      vector<int> dfsList;
      dfs(0, adj, visited, dfsList);
      return dfsList;
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
      vector<int> bfsList;
      vector<int> visited(V, 0);
      queue<int> q;
      q.push(0);
      visited[0] = 1;
      while(!q.empty()){
        int node = q.front();
        q.pop();
        bfsList.push_back(node);

        for(auto neighbour : adj[node]){
          if(!visited[neighbour]){
            q.push(neighbour);
            visited[neighbour] = 1;
          }
        }
      }
      return bfsList;
    }
};
