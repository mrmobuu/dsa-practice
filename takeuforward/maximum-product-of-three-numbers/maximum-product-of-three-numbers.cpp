class Solution {
   public:
    int maximumProduct(vector<int>& nums) {
        // Your code goes here
        sort(nums.begin(), nums.end());
        int negCnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                negCnt++;
            }
        }
        if (negCnt == 0 || negCnt == 1) {
            return (nums[n - 1] * nums[n - 2] * nums[n - 3]);
        } else {
            return max(nums[n - 1] * nums[n - 2] * nums[n - 3],
                       nums[n - 1] * nums[0] * nums[1]);
        }
    }
};
