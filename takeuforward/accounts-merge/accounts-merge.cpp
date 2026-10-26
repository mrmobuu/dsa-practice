class DisjointSet {
    vector<int> rank, parent, size;

   public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findParent(int u) {
        if (u == parent[u]) {
            return u;
        }
        return parent[u] = findParent(parent[u]);
    }

    bool find(int u, int v) { return findParent(u) == findParent(v); }

    void unionByRank(int u, int v) {
        int ultp_u = findParent(u);
        int ultp_v = findParent(v);

        if (ultp_u == ultp_v) return;

        if (rank[ultp_u] > rank[ultp_v]) {
            parent[ultp_v] = ultp_u;
        } else if (rank[ultp_u] < rank[ultp_v]) {
            parent[ultp_u] = ultp_v;
        } else {
            parent[ultp_u] = ultp_v;
            rank[ultp_v]++;
        }
    }

    void unionBySize(int u, int v) {
        int ultp_u = findParent(u);
        int ultp_v = findParent(v);

        if (ultp_u == ultp_v) return;

        if (size[ultp_u] > size[ultp_v]) {
            parent[ultp_v] = ultp_u;
        } else if (size[ultp_u] < size[ultp_v]) {
            parent[ultp_u] = ultp_v;
        } else {
            parent[ultp_u] = ultp_v;
            size[ultp_v] += size[ultp_u];
        }
    }
};

class Solution {
   public:
    vector<vector<string>> accountsMerge(vector<vector<string>> accounts) {
        int n = accounts.size();
        DisjointSet ds(n);
        unordered_map<string, int> mpp;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                string mail = accounts[i][j];
                if (mpp.find(mail) == mpp.end()) {
                    mpp[mail] = i;
                } else {
                    ds.unionByRank(i, mpp[mail]);
                }
            }
        }

        vector<string> mergedMail[n];
        for (auto it : mpp) {
            int ultP = ds.findParent(it.second);
            // cout << it.first
            mergedMail[ultP].push_back(it.first);
        }

        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {
            if (mergedMail[i].size() == 0) {
                continue;
            }
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            sort(mergedMail[i].begin(), mergedMail[i].end());
            for (auto it : mergedMail[i]) {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        // sort(ans.begin(), ans.end());
        return ans;
    }
};
