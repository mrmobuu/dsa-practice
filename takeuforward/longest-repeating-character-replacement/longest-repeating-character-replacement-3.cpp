class Solution {
   public:
    int characterReplacement(string s, int k) {
        // your code goes here
        int n = s.size();
        int i = 0, j = 0;
        map<int, int> mpp;
        int ans = 0, maxi = 0;
        while (j < n) {
            mpp[s[j]]++;
            maxi = max(maxi, mpp[s[j]]);
            if(j - i + 1 - maxi > k){
                mpp[s[i]]--;
                if (mpp[s[i]] == 0) {
                    mpp.erase(s[i]);
                }
                // maxi = 0;
                // for (auto it : mpp) {
                //     maxi = max(maxi, it.second);
                // }
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
