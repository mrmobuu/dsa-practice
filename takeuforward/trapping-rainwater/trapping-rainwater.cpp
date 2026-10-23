class Solution {
   public:
    int trap(vector<int> &height) {
        int n = height.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        int prefixMax = 0, suffixMax = 0;
        for (int i = 0; i < n; i++) {
            prefixMax = max(prefixMax, height[i]);
            prefix[i] = prefixMax;

            suffixMax = max(suffixMax, height[n - i - 1]);
            suffix[n - i - 1] = suffixMax;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (min(prefix[i], suffix[i]) - height[i]);
        }
        return ans;
    }
};
