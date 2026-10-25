class Solution {
   private:
    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n) return false;
        if (j < 0 || j >= m) return false;
        return true;
    }

   public:
    int orangesRotting(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        queue<pair<int, int>> q;
        int total = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(grid[i][j] != 0){
                    total++;
                }
                if (grid[i][j] == 2 && !vis[i][j]) {
                    vis[i][j] = true;
                    q.push({i, j});
                }
            }
        }

        int ans = 0;

        vector<int> rowArr = {-1, 1, 0, 0};
        vector<int> colArr = {0, 0, 1, -1};

        int count = 0;

        while (!q.empty()) {
            int size = q.size();

            count += size;

            for (int i = 0; i < size; i++) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for (int j = 0; j < 4; j++) {
                    int newRow = row + rowArr[j];
                    int newCol = col + colArr[j];

                    if (isValid(newRow, newCol, n, m) &&
                        grid[newRow][newCol] == 1 && !vis[newRow][newCol]) {
                        q.push({newRow, newCol});
                        vis[newRow][newCol] = true;
                        grid[newRow][newCol] = 2;
                    }
                }
            }
            if(!q.empty()){
                ans++;
            }
        }
        if(total == count) return ans;

        return -1;
    }
};
