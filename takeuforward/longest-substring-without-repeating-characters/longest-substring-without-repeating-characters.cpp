class Solution {
   public:
    int longestNonRepeatingSubstring(string& s) {
        int n = s.size();
        int i = 0, j = 0, ans = 0;
        map<int, int> mpp;
        while (j < n) {
            mpp[s[j] - 'a']++;
            while (mpp[s[j] - 'a'] > 1) {
                mpp[s[i] - 'a']--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
