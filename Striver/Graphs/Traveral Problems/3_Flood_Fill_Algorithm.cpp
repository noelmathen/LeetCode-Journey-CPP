class Solution{
    public:
    void dfs(int row, int col, vector<vector<int>> &visited, vector<vector<int>> &image, int newColor, int originalColor){
        int n = image.size();
        int m = image[0].size();
        
        visited[row][col] = 1;
        image[row][col] = newColor;

        int dummyRow[4] = {-1, 0, 1, 0};
        int dummyCol[4] = {0, 1, 0, -1};
        for(int i=0; i<4; i++){
            int newRow = row + dummyRow[i];
            int newCol = col + dummyCol[i];
            if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && image[newRow][newCol]==originalColor && !visited[newRow][newCol]){
                image[newRow][newCol] = newColor;
                dfs(newRow, newCol, visited, image, newColor, originalColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int originalColor = image[sr][sc];

        dfs(sr, sc, visited, image, newColor, originalColor);
        return image;
    }
};
