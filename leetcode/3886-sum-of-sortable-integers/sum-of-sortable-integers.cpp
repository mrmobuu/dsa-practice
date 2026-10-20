class Solution {
private:
    bool check(vector<int>& nums, int k) {
        int prev = INT_MIN;
        int n = nums.size();
        for (int j = 0; j < n; j += k) {
            int desc = 0;
            int r = j + k;
            int mini = nums[j];
            int maxi = nums[j];
            for (int i = j; i < r; i++) {
                mini = min(mini, nums[i]);
                maxi = max(maxi, nums[i]);

                if (nums[i] > nums[i + 1 < r ? i + 1 : j]){
                    desc++;
                }
            }
            if (desc > 1 || prev > mini) {
                return false;
            }
            prev = maxi;
        }
        return true;
    }

public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (check(nums, i)) {
                    ans += i;
                }
                int k = n / i;
                if (i != k && check(nums, k)) {
                    ans += k;
                }
            }
        }

        return ans;
    }
};
