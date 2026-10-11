class Solution {
   public:
    string minWindow(string s, string t) {
        // your code goes here
        int n = s.size();
        int i = 0, j = 0;
        unordered_map<char, int> mpp;
        for (auto it : t) {
            mpp[it]++;
        }
        int cnt = 0, sIndex = -1;
        int minLen = INT_MAX;
        string ans = "";
        while (j < n) {
            mpp[s[j]]--;
            if (mpp[s[j]] >= 0) cnt++;

            while (cnt == t.size()) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    sIndex = i;
                }
                mpp[s[i]]++;
                if (mpp[s[i]] > 0) {
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};
