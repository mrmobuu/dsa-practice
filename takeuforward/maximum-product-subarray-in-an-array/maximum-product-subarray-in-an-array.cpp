class Solution {
   public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN, prefix = 1, suffix = 1;
        vector<int> prefixArr(n,0), suffixArr(n,0);
        for (int i = 0; i < n; i++) {
            prefix *= nums[i];
            suffix *= nums[n - i - 1];
            prefixArr[i] = prefix;
            suffixArr[n - 1 - i] = suffix;

            // cout << prefix << " " << suffix << endl;

            ans = max(ans, max(prefixArr[i], suffixArr[n - 1 - i]));

            if (prefix == 0) {
                prefix = 1;
            }
            if (suffix == 0) {
                suffix = 1;
            }

        }
        return ans;
    }
};
