class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int mini = INT_MAX;
        for (auto it : nums) {
            mini = min(mini, it);
        }
        for (auto it : nums) {
            ans += abs(mini - it);
        }
        return ans;
    }
};
