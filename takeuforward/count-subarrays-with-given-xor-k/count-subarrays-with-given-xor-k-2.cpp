class Solution {
   public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int ans = 0;
        int n = nums.size();
        int xr = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        for (int i = 0; i < n; i++) {
            xr ^= nums[i];
            int val = xr ^ k;
            if (mpp.find(val) != mpp.end()) {
                ans += mpp[val];
            }
            mpp[xr]++;
        }
        return ans;
    }
};
