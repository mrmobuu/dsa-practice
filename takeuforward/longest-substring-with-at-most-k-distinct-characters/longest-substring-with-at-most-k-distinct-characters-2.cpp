class Solution {
   public:
    int kDistinctChar(string& s, int k) {
        // your code goes here
        int n = s.size();
        int i = 0, j = 0;
        int ans = 0;
        unordered_map<int, int> mpp;
        while (j < n) {
            mpp[s[j] - 'a']++;
            if (mpp.size() > k) {
                mpp[s[i] - 'a']--;
                if (mpp[s[i] - 'a'] == 0) {
                    mpp.erase(s[i] - 'a');
                }
                i++;
            }
            ans = max(ans,j - i + 1);
            j++;
        }
        return ans;
    }
};
