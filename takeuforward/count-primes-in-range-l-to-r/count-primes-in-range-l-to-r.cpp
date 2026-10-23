class Solution {
   private:
    vector<bool> rangePrime(int max) {
        vector<bool> vec(max + 1, true);
        vec[0] = false;
        vec[1] = false;
        for (int i = 2; i * i <= max; i++) {
            if (vec[i]) {
                for (int j = i + i; j <= max; j += i) {
                    vec[j] = false;
                }
            }
        }
        return vec;
    }

   public:
    vector<int> primesInRange(vector<vector<int>>& queries) {
        // your code goes here
        vector<int> ans;
        int maxRange = INT_MIN;
        for (int i = 0; i < queries.size(); i++) {
            maxRange = max(maxRange, queries[i][1]);
        }

        vector<bool> primeRange = rangePrime(maxRange);
        vector<int> primeSumRange(maxRange + 1, 0);

        for (int i = 1; i <= maxRange; i++) {
            primeSumRange[i] = primeSumRange[i - 1];
            if (primeRange[i]) {
                primeSumRange[i]++;
            }
        }

        for (int i = 0; i < queries.size(); i++) {
            int f = queries[i][0];
            int l = queries[i][1];
            ans.push_back(primeSumRange[l] - primeSumRange[f - 1]);
        }
        return ans;
    }
};
