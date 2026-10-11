class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for (auto it : nums) {
            st.insert(it);
        }
        int ans = 0, cntr = 1, el = INT_MIN;
        for (auto it : st) {
            if ((it - 1) == el) {
                cntr++;
            } else {
                cntr = 1;
            }
            el = it;
            ans = max(ans, cntr);
        }
        return ans;
    }
};
