class Solution {
   private:
    void bfs(int src, vector<pair<int, int>> adj[], vector<int> &distance,
             int k) {
        queue<pair<int, pair<int, int>>> q;

        q.push({0, {0, src}});
        distance[src] = 0;

        while (!q.empty()) {
            int stop = q.front().first;
            int dist = q.front().second.first;
            int node = q.front().second.second;

            q.pop();

            if (stop > k) {
                continue;
            }
            for (auto it : adj[node]) {
                if (distance[it.first] > dist + it.second) {
                    distance[it.first] = dist + it.second;
                    q.push({stop + 1, {dist + it.second, it.first}});
                }
            }
        }
    }

   public:
    int CheapestFlight(int n, vector<vector<int>> &flights, int src, int dst,
                       int K) {
        vector<pair<int, int>> adj[n];
        for (auto it : flights) {
            int u = it[0];
            int v = it[1];
            int dist = it[2];
            adj[u].push_back({v, dist});
        }
        vector<int> distance(n, INT_MAX);
        bfs(src, adj, distance, K);

        for (int i = 0; i < n; i++) {
            // cout << i << " " << distance[i] << endl;
            if (distance[i] == INT_MAX) {
                distance[i] = -1;
            }
        }
        return distance[dst];
    }
};
