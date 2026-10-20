class Solution {
   private:
    void recursion(vector<vector<int>>& ans, vector<int>& candidates,
                   vector<int>& temp, int i, int target) {
        if (i >= candidates.size() || target < 0) {
            return;
        }
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        recursion(ans, candidates, temp, i + 1, target);

        temp.push_back(candidates[i]);

        recursion(ans, candidates, temp, i, target - candidates[i]);

        temp.pop_back();
    }

   public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        recursion(ans, candidates, temp, 0, target);
        return ans;
    }
};
