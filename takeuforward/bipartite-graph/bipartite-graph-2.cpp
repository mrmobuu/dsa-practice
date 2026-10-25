class Solution {
   private:
    bool dfs(vector<int> adj[], vector<int>& altClr, int vtx, int clr) {
        altClr[vtx] = clr;

        for (auto it : adj[vtx]) {
            if (altClr[it] == -1) {
                if (!dfs(adj, altClr, it, !clr)) {
                    return false;
                }
            } else if (altClr[it] == altClr[vtx]) {
                return false;
            }
        }
        return true;
    }

   public:
    bool isBipartite(int V, vector<vector<int>> edges) {
        vector<int> adj[V];
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> altClr(V, -1);

        for (int i = 0; i < V; i++) {
            if (altClr[i] == -1) {
                if (!dfs(adj, altClr, i, 0)) {
                    return false;
                }
            }
        }
        return true;
    }
};
