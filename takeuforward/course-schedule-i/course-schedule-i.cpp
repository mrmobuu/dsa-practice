class Solution {
   private:
    bool dfs(int start, vector<int> adj[], vector<bool>& vis,
             vector<bool>& pathVis) {
        vis[start] = true;
        pathVis[start] = true;

        for (auto it : adj[start]) {
            if (!vis[it]) {
                if (!dfs(it, adj, vis, pathVis)) {
                    return false;
                }
            } else if (pathVis[it] == 1) {
                return false;
            }
        }

        pathVis[start] = false;

        return true;
    }

   public:
    bool canFinish(int N, vector<vector<int>> arr) {
        vector<int> adj[N];
        for (auto it : arr) {
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }

        vector<bool> vis(N, false);
        vector<bool> pathVis(N, false);
        for (int i = 0; i < N; i++) {
            if (!vis[i]) {
                if (!dfs(i, adj, vis, pathVis)) {
                    return false;
                }
            }
        }
        return true;
    }
};
