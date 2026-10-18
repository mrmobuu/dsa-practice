class Solution {
public:
    int minSelection(vector<vector<int>>& availableIntervals,
                     vector<vector<int>>& targetIntervals) {

        sort(availableIntervals.begin(), availableIntervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0]) {
                     return a[1] < b[1];
                 }
                 return a[0] < b[0];
             });

        sort(targetIntervals.begin(), targetIntervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0]) {
                     return a[1] < b[1];
                 }
                 return a[0] < b[0];
             });

        vector<vector<int>> mergedTargetIntervals;
        int i = 0;
        int n = targetIntervals.size();
        while (i < n) {
            int start = targetIntervals[i][0];
            int end = targetIntervals[i][1];
            i++;
            while (i < n && end >= targetIntervals[i][0]) {
                end = max(end, targetIntervals[i][1]);
                i++;
            }
            mergedTargetIntervals.push_back({start, end});
        }


        i = 0;
        int ans = 0, covered = -1;
        int m = availableIntervals.size();

        for (auto it : mergedTargetIntervals) {
            int l = it[0];
            int r = it[1];
            while (covered < r) {
                int start = max(l, covered);
                int end = covered;
                while (i < m && availableIntervals[i][0] <= start) {
                    end = max(end, availableIntervals[i][1]);
                    i++;
                }

                if (end <= covered || end < l){
                    return -1;
                }

                covered = end;
                ans++;
            }
        }

        return ans;
    }
};
