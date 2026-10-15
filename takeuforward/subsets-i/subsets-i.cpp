class Solution {
   private:
    void recursion(int i, int sum, vector<int>& nums, vector<int>& ans) {
        if (i == nums.size()) {
            ans.push_back(sum);
            return;
        }

        recursion(i + 1, sum + nums[i], nums, ans);

        recursion(i + 1, sum, nums, ans);
    }

   public:
    vector<int> subsetSums(vector<int>& nums) {
        // your code goes here
        vector<int> ans;
        int sum = 0;
        recursion(0, sum, nums, ans);
        return ans;
    }
};
