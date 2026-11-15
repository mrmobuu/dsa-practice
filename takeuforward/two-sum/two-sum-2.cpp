class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            v.push_back({i, nums[i]});
        }

        sort(v.begin(), v.end(),
             [](vector<int> a, vector<int> b) { return a[1] < b[1]; });

        int i = 0, j = n - 1;
        while (i < j) {
            int sum = v[i][1] + v[j][1];
            if (sum == target) {
                return {v[i][0], v[j][0]};
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }
        return {};
    }
};
