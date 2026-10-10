class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        long long ans = 0;
        int n = nums1.size();
        vector<int> diff(n);
        long long sumDiff = 0;
        long long k = k1 + k2;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            int val = abs(nums1[i] - nums2[i]);
            diff[i] = val;
            sumDiff += val;
            maxi = max(maxi, val);
        }
        if (sumDiff <= k) {
            return 0;
        }

        map<int, int> freq;
        for (auto it : diff) {
            freq[it]++;
        }
        for (int i = maxi; i > 0 && k > 0; i--) {
            if (freq[i] == 0)
                continue;

            if (k >= freq[i]) {
                k -= freq[i];
                freq[i - 1] += freq[i];
                // freq[i] = 0;
                freq.erase(i);
            } else {
                freq[i] -= k;
                freq[i - 1] += k;
                k = 0;
            }
        }

        for (auto it : freq) {
            ans += (((long long)it.first * (long long)it.first) * (long long)it.second);
        }
        return ans;
    }
};
