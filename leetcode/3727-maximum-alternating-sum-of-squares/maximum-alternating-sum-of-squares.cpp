class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        int k = n / 2;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (nums[i] * nums[i]);
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(), nums.end());

        // for (int i = 0; i < n; i++) {
        //     cout << nums[i] << endl;
        // }

        for (int i = 0; i < k; i++) {
            ans -= 2 * ((long long)nums[i] * (long long)nums[i]);
        }

        return ans;
    }
};
