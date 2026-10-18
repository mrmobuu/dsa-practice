class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, -1));
        queue<pair<int, int>> q;
        int startRow = 0;
        int startCol = 0;

        q.push({0, 0});

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            vis[i][j] = 1;

            if (grid[i][j] == 'L') {
                startRow--;
            } else if (grid[i][j] == 'R') {
                startRow++;
            } else if (grid[i][j] == 'D') {
                startCol++;
            } else if (grid[i][j] == 'U') {
                startCol--;
            }

            if (startCol < 0 || startRow < 0 || startCol >= m ||
                startRow >= n || vis[startCol][startRow] == 1) {
                startCol = i;
                startRow = j;
                continue;
            }
            q.push({startCol, startRow});

        }

        return {startCol, startRow};
    }
};
