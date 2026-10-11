class Solution {
   public:
    int candy(vector<int>& ratings) {
        // your code goes here
        int n = ratings.size();
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        for (int i = 0; i < n; i++) {
            if (i > 0 && ratings[i] > ratings[i - 1]) {
                left[i] = left[i - 1] + 1;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (i < n - 1 && ratings[i] > ratings[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cout << left[i] << " " << right[i] << endl;
            ans += max(left[i], right[i]);
        }
        return ans;
    }
};
