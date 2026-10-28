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
    void recursion(int row, int col, vector<vector<int>>& grid, int val,
                   int& ans, vector<vector<vector<int>>>& dp) {
        int m = grid.size();
        int n = grid[0].size();
        if (row == n && col == m) {
            return;
        }
        val = val ^ grid[row][col];

        if (dp[row][col][val] != -1) {
            return;
        }

        // cout << row << " " << col << endl;
        if (row == (m - 1) && col == (n - 1)) {
            dp[row][col][val] = ans;
            ans = min(ans, val);
            return;
        }

        dp[row][col][val] = val;
        if (isValid(row + 1, col, m, n)) {
            recursion(row + 1, col, grid, val, ans, dp);
        }
        if (isValid(row, col + 1, m, n)) {
            recursion(row, col + 1, grid, val, ans, dp);
        }
    }

public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(
            m, vector<vector<int>>(n, vector<int>(1024, -1)));
        int ans = INT_MAX;
        recursion(0, 0, grid, 0, ans, dp);

        return ans;
    }
};
