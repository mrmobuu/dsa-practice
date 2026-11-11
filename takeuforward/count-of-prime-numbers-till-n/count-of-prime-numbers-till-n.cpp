class Solution {
   public:
    int primeUptoN(int n) {
        int ans = 0;
        vector<bool> v(n + 1, true);
        for (int i = 2; i * i <= n; i++) {

            if (v[i] == true) {
                int k = i + i;
                for (int j = k; j <= n; j += i) {
                    v[j] = false;
                }
            }
        }
        for (int i = 2; i <= n; i++) {
            if (v[i] == true) {
                ans++;
            }
        }
        return ans;
    }
};
