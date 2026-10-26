class Solution {
   private:
    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n) return false;
        if (j < 0 || j >= m) return false;
        return true;
    }

    void bfs(pair<int, int> source, vector<vector<int>> &grid,
             vector<vector<int>> &distance) {
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;

        pq.push({0, {source.first, source.second}});

        distance[source.first][source.second] = 0;

        int n = grid.size();
        int m = grid[0].size();

        vector<int> rowArr = {-1, 1, 0, 0};
        vector<int> colArr = {0, 0, -1, 1};

        while (!pq.empty()) {
            int sz = pq.size();

            for (int i = 0; i < sz; i++) {
                int dist = pq.top().first;
                int row = pq.top().second.first;
                int col = pq.top().second.second;
                pq.pop();

                for (int j = 0; j < 4; j++) {
                    int newRow = row + rowArr[j];
                    int newCol = col + colArr[j];

                    if (isValid(newRow, newCol, n, m) &&
                        grid[newRow][newCol] == 1) {
                        if (distance[newRow][newCol] > dist + 1) {
                            distance[newRow][newCol] = dist + 1;
                            pq.push({dist + 1, {newRow, newCol}});
                        }
                    }
                }
            }
        }
    }

   public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> distance(n, vector<int>(m, INT_MAX));

        bfs(source, grid, distance);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (distance[i][j] == INT_MAX) {
                    distance[i][j] = -1;
                }
            }
        }

        return distance[destination.first][destination.second];
    }
};
