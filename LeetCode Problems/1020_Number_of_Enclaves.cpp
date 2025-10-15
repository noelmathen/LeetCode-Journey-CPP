//This is a solution I made myself. This is iok and it works. 

//But the general approach is to use a two-pass solution:
//1st pass - Find all the border lands, and their connected lands(through bfs/dfs) and mark them as visited
//2nd pass - All the remaining unvisited lands count will be the asnwer
class Solution{
public:
    void dfs(int row, int col, int& count, vector<vector<int>>& visited, vector<vector<int>>& grid, bool& outOfBoundary){
        visited[row][col] = 1;

        int n = grid.size();
        int m = grid[0].size();
        
        int dummyRow[4] = {0, -1, 0, 1};
        int dummyCol[4] = {-1, 0, 1, 0};

        for(int i=0; i<4; i++){
            int newRow = dummyRow[i] + row;
            int newCol = dummyCol[i] + col;

            if(newRow<0 || newRow>=n || newCol<0 || newCol>=m){
                outOfBoundary=true;
                continue;
            }

            if(grid[newRow][newCol]==1 && !visited[newRow][newCol]){
                count++;
                dfs(newRow, newCol, count, visited, grid, outOfBoundary);
            }
        }
    }

    int numEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        int maxCount=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    int count=1;
                    bool outOfBoundary = false;
                    dfs(i, j, count, visited, grid, outOfBoundary);
                    if(!outOfBoundary)
                        maxCount += count;
                }
            }
        }

        return maxCount;

    }
};
