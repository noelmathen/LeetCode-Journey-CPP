class Solution{
public:
    void dfs(int row, int col, vector<vector<int>> &visited, vector<vector<char>> &grid){
        visited[row][col]=1;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                int newRow = row+i;
                int newCol = col+j;

                if(        newRow>=0 
                        && newRow<n 
                        && newCol>=0 
                        && newCol<m 
                        && grid[newRow][newCol]=='1' 
                        && !visited[newRow][newCol]){
                    
                    dfs(newRow, newCol, visited, grid);
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int islands=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(i, j, visited, grid);
                    islands++;
                }
            }
        }

        return islands;
    }
};
