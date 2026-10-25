class Solution {
   private:
    vector<int> topoSort(vector<int> adj[], int V) {
        vector<int> indegree(V, 0);

        for (int i = 0; i < V; i++) {
            for (auto it : adj[i]) {
                indegree[it]++;
            }
        }

        queue<int> q;
        vector<int> ans;

        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int el = q.front();
            q.pop();
            ans.push_back(el);

            for (auto it : adj[el]) {
                indegree[it]--;

                if (indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        return ans;
    }

   public:
    vector<int> findOrder(int N, vector<vector<int>> arr) {
        vector<int> adj[N];
        for (auto it : arr) {
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }

        vector<int> topo;

        topo = topoSort(adj, N);

        if (topo.size() < N) {
            return {};
        }
        return topo;
    }
};
