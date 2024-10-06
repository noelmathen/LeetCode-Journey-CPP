//Floyd - Warshall algorithm
class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        int INF = INT_MAX;
        vector<vector<int>> costMatrix(26, vector<int>(26, INF));
        
        for(int i=0; i<26; i++)
            costMatrix[i][i] = 0; 
        
        for(int i=0; i<original.size(); i++){
            int u = original[i] - 'a';
            int v = changed[i] - 'a';
            costMatrix[u][v] = min(costMatrix[u][v], cost[i]);
        }
        int n=26;
        for(int k=0; k<n; k++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(costMatrix[i][k]<INF && costMatrix[k][j]<INF)
                        costMatrix[i][j] = min(costMatrix[i][j], costMatrix[i][k]+costMatrix[k][j]);
                }
            }
        }
        n = source.size();
        long long totalCost=0;
        for(int i=0; i<n; i++){
            int u = source[i] - 'a';
            int v = target[i] - 'a';
            if(costMatrix[u][v] == INF)
                return -1;
            totalCost += costMatrix[u][v];
        }

        return totalCost;
    }
};