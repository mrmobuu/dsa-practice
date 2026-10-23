class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int el = nums[i];
            int tempEl = 0;
            while (el) {
                int rem = el % 10;
                el = el / 10;
                tempEl += rem;
            }
            ans = min(tempEl, ans);
        }
        return ans;
    }
};
