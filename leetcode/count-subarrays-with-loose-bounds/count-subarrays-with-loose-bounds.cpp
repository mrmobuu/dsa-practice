class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxK) {
                nums[i] = -1;
            }
            if (nums[i] < minK) {
                nums[i] = -1;
            }
        }
        long long ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == -1) {
                if (cnt != 0) {
                    ans += (((long long)(cnt) * (long long)(cnt + 1)) / 2);
                }
                cnt = 0;
            } else {
                cnt++;
            }
        }
        ans += (((long long)(cnt) * (long long)(cnt + 1)) / 2);
        return ans;
    }
};
