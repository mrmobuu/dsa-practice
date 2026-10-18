class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        int ans = INT_MIN;
        // int curr = 1;
        for (int i = 0; i < n; i++) {
            if(nums[i] != 0 && prefix[i] == 0){
                prefix[i] = 1;
            }

            prefix[i] *= nums[i];


            if (i + 1 < n) {
                prefix[i + 1] = prefix[i];
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if(nums[i] != 0 && suffix[i] == 0){
                suffix[i] = 1;
            }

            suffix[i] *= nums[i];
            if (i - 1 > 0) {
                suffix[i - 1] = suffix[i];
            }
        }

        for (int i = 0; i < n; i++) {
            ans = max(ans, max(prefix[i], suffix[i]));
        }

        return ans;
    }
};
