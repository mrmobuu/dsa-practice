class Solution {
   private:
    int helperFunc(vector<int>& nums, int goal) {
        int n = nums.size();
        int i = 0, j = 0;
        if (goal < 0) {
            return 0;
        }
        int ans = 0;
        int sum = 0;
        while (j < n) {
            sum += nums[j];
            while (sum > goal) {
                sum -= nums[i];
                i++;
            }
            ans += (j - i + 1);
            j++;
        }
        return ans;
    }

   public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // your code goes here
        return helperFunc(nums, goal) - helperFunc(nums, goal - 1);
    }
};
