class Solution {
private:
    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n) {
            return false;
        }
        if (j < 0 || j >= m) {
            return false;
        }
        return true;
    }

    void bfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis,
             bool fill) {
        vis[i][j] = true;
        if (fill) {
            grid[i][j] = 1;
        }
        queue<pair<int, int>> q;

        q.push({i, j});

        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;

            q.pop();
            vector<int> rowArr = {-1, 0, 1, 0};
            vector<int> colArr = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++) {
                int newRow = row + rowArr[i];
                int newCol = col + colArr[i];

                if (isValid(newRow, newCol, n, m) && !vis[newRow][newCol] &&
                    grid[newRow][newCol] == 0) {
                    if (fill) {
                        grid[newRow][newCol] = 1;
                    }
                    q.push({newRow, newCol});

                    vis[newRow][newCol] = true;
                }
            }
        }
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        // fill the side island first then we'll check the islands

        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 0 && !vis[i][0]) {
                vis[i][0] = true;
                bfs(i, 0, grid, vis, true);
            }
        }
        for (int i = 0; i < n; i++) {
            if (grid[i][m - 1] == 0 && !vis[i][m - 1]) {
                vis[i][m - 1] = true;
                bfs(i, m - 1, grid, vis, true);
            }
        }
        for (int i = 0; i < m; i++) {
            if (grid[0][i] == 0 && !vis[0][i]) {
                vis[0][i] = true;
                bfs(0, i, grid, vis, true);
            }
        }
        for (int i = 0; i < m; i++) {
            if (grid[n - 1][i] == 0 && !vis[n - 1][i]) {
                vis[n - 1][i] = true;
                bfs(n - 1, i, grid, vis, true);
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // cout << grid[i][j] << " ";
                if(grid[i][j] == 0 && !vis[i][j]){
                    ans++;
                    bfs(i, j, grid, vis, false);
                }
            }
            // cout << endl;
        }
        return ans;
    }
};
