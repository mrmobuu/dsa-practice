class Solution {
   private:
    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n) return false;
        if (j < 0 || j >= m) return false;
        return true;
    }
    void bfs(vector<vector<char>> &grid, vector<vector<bool>> &vis, int i,
             int j) {
        vis[i][j] = true;

        queue<pair<int, int>> q;

        q.push({i, j});

        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;

            q.pop();
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    int newRow = row + i;
                    int newCol = col + j;

                    if (isValid(newRow, newCol, n, m) && grid[newRow][newCol] ==
                            '1' && !vis[newRow][newCol]) {
                        q.push({newRow, newCol});
                        vis[newRow][newCol] = true;
                    }
                }
            }
        }
    }

   public:
    int numIslands(vector<vector<char>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    ans++;
                    bfs(grid, vis, i, j);
                }
            }
        }
        return ans;
    }
};
