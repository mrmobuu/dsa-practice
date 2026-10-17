class Solution {
   public:
    vector<char> frequencySort(string& s) {
        // your code goes here
        map<char, int> mpp;
        for (auto it : s) {
            mpp[it]++;
        }
        vector<vector<int>> ans;
        for (auto it : mpp) {
            // cout << it.first << " " << it.second << endl;
            ans.push_back({it.first - 'a', it.second});
        }
        sort(ans.begin(), ans.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[1] == b[1]) {
                     return a[0] < b[0];
                 } else {
                     return a[1] > b[1];
                 }
             });
        vector<char> finalAns;
        for (auto it : ans) {
            // cout << it[0] << " " << it[1] << endl;
            finalAns.push_back(it[0] + 'a');
        }
        return finalAns;
    }
};
