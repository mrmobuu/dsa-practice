class Solution {
   private:
    int helperFunc(vector<int> &a, int k) {
        int split = 1;
        int n = a.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + a[i] > k) {
                split++;
                sum = a[i];
            } else {
                sum += a[i];
            }
        }
        return split;
    }

   public:
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int low = 0, high = 0;
        for (auto it : a) {
            low = max(low, it);
            high += it;
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            int split = helperFunc(a, mid);
            // cout << low << " " << high << " ";
            // cout << mid << " " << split << endl;
            if (split <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
