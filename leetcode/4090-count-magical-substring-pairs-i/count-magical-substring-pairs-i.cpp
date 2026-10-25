class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            vector<int> uniq(27, 0);
            vector<int> left(27, 0);

            int unique = 0;
            for (int j = i; j >= 0; j--) {
                if (left[s[j] - 'a']++ == 0) {
                    unique++;
                }
                
                uniq[unique]++;
            }

            unique = 0;
            vector<int> right(27, 0);

            for (int j = i + 1; j < n; j++) {
                if (right[s[j] - 'a']++ == 0) {
                    unique++;
                }
                ans += uniq[unique];
            }
        }
        return ans;
    }
};
