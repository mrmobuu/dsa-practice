class Solution {
   private:
    bool dfs(int start, vector<int> adj[], vector<bool> vis,
             vector<bool> path) {
        vis[start] = true;
        path[start] = true;
        for (auto it : adj[start]) {
            if (!vis[it]) {
                if (dfs(it, adj, vis, path)) {
                    return true;
                }
            } else if (path[it] == 1) {
                return true;
            }
        }
        path[start] = false;
        return false;
    }

   public:
    bool isCyclic(int N, vector<int> adj[]) {
        vector<bool> vis(N, false);
        vector<bool> path(N, false);

        for (int i = 0; i < N; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, path)) {
                    return true;
                }
            }
        }
        return false;
    }
};
