class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0]) {
                     return a[1] < b[1];
                 }
                 return a[0] < b[0];
             });
        int n = intervals.size();
        vector<vector<int>> ans;
        int i = 0;

        while (i < n) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            i++;
            while (i < n && end >= intervals[i][0]) {
                end = max(end,intervals[i][1]);
                i++;
            }
            ans.push_back({start, end});
        }

        return ans;
    }
};
