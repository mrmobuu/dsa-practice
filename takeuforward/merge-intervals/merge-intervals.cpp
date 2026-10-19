class Solution {
   public:
    vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
        // Your code goes here
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });
        vector<vector<int>> ans;
        int j = 0;
        int n = intervals.size();
        while (j < n) {
            int start = intervals[j][0];
            int end = intervals[j][1];
            j++;
            while (j < n && end >= intervals[j][0]) {
                end = max(end, intervals[j][1]);
                j++;
            }
            ans.push_back({start, end});
        }
        return ans;
    }
};
