class Solution {
   public:
    int longestNonRepeatingSubstring(string& s) {
        // your code goes here
        int n = s.size();
        map<int, int> mpp;
        int j = 0, i = 0;
        int ans = 0;
        while (j < n) {
            // cout << mpp[s[j] - 'a'] << endl;
            mpp[s[j] - 'a']++;
            while (mpp[s[j] - 'a'] > 1) {
                mpp[s[i] - 'a']--;
                if (mpp[s[i] - 'a'] == 0) {
                    mpp.erase(s[i] - 'a');
                }
                i++;
            }
            // cout << i << " " << j << " " << s[j] << endl;
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
