class Solution {
public:

    void dfs(vector<vector<char>>& grid, int r, int c) {

        int m = grid.size();
        int n = grid[0].size();

        // Boundary and water condition
        if(r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == '0')
            return;

        // Mark visited
        grid[r][c] = '0';

        // Visit all 4 directions
        dfs(grid, r-1, c); // Up
        dfs(grid, r+1, c); // Down
        dfs(grid, r, c-1); // Left
        dfs(grid, r, c+1); // Right
    }

    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] == '1') {

                    count++;

                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};