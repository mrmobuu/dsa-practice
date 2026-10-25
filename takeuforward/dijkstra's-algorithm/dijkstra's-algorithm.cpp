class Solution {
   public:
    vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {
        vector<vector<pair<int, int>>> adj(V);

        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int dt = it[2];
            adj[u].push_back({v, dt});
            adj[v].push_back({u, dt});
        }

        vector<int> dist(V, 1e9);
        dist[S] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        pq.push({0, S});

        while (!pq.empty()) {
            int vtx = pq.top().second;
            int dt = pq.top().first;
            pq.pop();

            for (auto it : adj[vtx]) {
                int newVtx = it.first;
                int newDist = it.second;

                if (dist[newVtx] > dt + newDist) {
                    dist[newVtx] = dt + newDist;
                    pq.push({dt + newDist, newVtx});
                }
            }
        }
        return dist;
    }
};
