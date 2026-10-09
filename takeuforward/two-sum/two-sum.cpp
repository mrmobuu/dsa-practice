class Solution {
   public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            pair<int, int> p1 = {nums[i], i};
            v.push_back(p1);
        }
        sort(v.begin(), v.end(), [](const pair<int, int> &a,const  pair<int, int> &b) {
            return (a.first < b.first);
        });
        int l = 0, r = n - 1;
        while (l < r) {
            int sum = v[l].first + v[r].first;
            if (sum == target) {
                return {v[l].second, v[r].second};
            } else if (sum > target) {
                r--;
            } else {
                l++;
            }
        }
        return {-1,-1};
    }
};
