class Solution {
private:
    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n)
            return false;
        if (j < 0 || j >= m)
            return false;
        return true;
    }
    long long dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& vis) {
        vis[r][c] = true;

        long long cnt = grid[r][c];

        int n = grid.size();
        int m = grid[0].size();

        int rowArr[] = {0, 0, 1, -1};
        int colArr[] = {1, -1, 0, 0};
        for (int i = 0; i < 4; i++) {
            int rowNew = r + rowArr[i];
            int colNew = c + colArr[i];
            if (isValid(rowNew, colNew, n, m) && !vis[rowNew][colNew] &&
                grid[rowNew][colNew] != 0) {
                // vis[rowNew][colNew] = true;
                cnt += dfs(rowNew, colNew, grid, vis);
            }
        }
        return cnt;
    }

public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] != 0) {
                    long long sizeIsland = dfs(i, j, grid, vis);
                    // cout << sizeIsland << endl;
                    ans += (sizeIsland % k == 0 ? 1 : 0);
                }
            }
        }
        return ans;
    }
};
