class Solution {
public:
    int minimumLength(string s) {
        unordered_map<int, int> mpp;
        int n = s.size();
        for (auto it : s) {
            mpp[it - 'a']++;
        }
        int ans = 0;
        for (auto it : mpp) {
            // cout << char(it.first + 'a') << " " << it.second << endl;
            if (it.second > 2) {
                ans += (it.second % 2 == 0 ? 2 : 1);
            } else {
                ans += it.second;
            }
        }
        return ans;
    }
};
