class Solution {
   private:
    bool bfs(vector<int> adj[], vector<int>& altClr, int vtx) {
        queue<int> q;
        q.push(vtx);

        altClr[vtx] = 0;
        while (!q.empty()) {
            int sz = q.size();

            for (int i = 0; i < sz; i++) {
                int v = q.front();
                q.pop();
                for (auto it : adj[v]) {
                    if (altClr[it] == -1) {
                        altClr[it] = !altClr[v];
                        q.push(it);
                    } else if (altClr[it] == altClr[v]) {
                        return false;
                    }
                }
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
                if (!bfs(adj, altClr, i)) {
                    return false;
                }
            }
        }
        return true;
    }
};
