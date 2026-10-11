class Solution {
   private:
    int helperFunc(int mid, vector<int> nums) {
        int n = nums.size();
        int totalTime = 0;
        for (int i = 0; i < n; i++) {
            int val = ceil((double)nums[i] / (double)mid);
            // cout << nums[i] << " " << val << " " << mid << endl;
            totalTime += val;
        }
        // cout << endl;
        return totalTime;
    }

   public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        int n = nums.size();
        int low = 1;
        int high = 1;
        for (auto it : nums) {
            high = max(it, high);
        }
        while (low < high) {
            int mid = (low + high) / 2;
            int timeTaken = helperFunc(mid, nums);
            if (timeTaken <= h) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return high;
    }
};
