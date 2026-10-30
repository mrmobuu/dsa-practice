using state = tuple<int, int, int>;

class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<pair<int, int>> adj[n];
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            adj[u].push_back({v, w});
        }
        priority_queue<state, vector<state>, greater<state>> pq;
        pq.push({0, 0, 1});

        vector<vector<int>> dist(n, vector<int>(k + 1, INT_MAX));
        dist[0][1] = 0;

        while (!pq.empty()) {
            auto [wt, node, occurance] = pq.top();
            pq.pop();
            if (node == n - 1) {
                return wt;
            }

            char parentChar = labels[node];
            for (auto it : adj[node]) {
                int childWt = it.second;
                int childNode = it.first;

                char childChar = labels[childNode];

                int newOccurance = childChar == parentChar ? occurance + 1 : 1;

                if(newOccurance > k){
                    continue;
                }

                if (dist[childNode][newOccurance] > wt + childWt &&
                    (childChar == parentChar && occurance < k)) {
                    dist[childNode][newOccurance] = wt + childWt;
                    pq.push({wt + childWt, childNode, newOccurance});
                } else if (dist[childNode][1] > wt + childWt &&
                           (childChar != parentChar)) {
                    dist[childNode][1] = wt + childWt;
                    pq.push({wt + childWt, childNode, newOccurance});
                }
            }
        }
        // for(auto it : dist){
        //     cout << it << endl;
        // }
        // for(auto it : consecutiveVal){
        //     cout << it.first << " " << it.second << endl;
        // }
        return -1;
    }
};
