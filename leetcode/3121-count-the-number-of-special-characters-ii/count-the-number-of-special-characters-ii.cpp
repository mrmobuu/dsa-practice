class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lc(26, 0);
        vector<int> uc(26, 0);
        for (auto it : word) {
            if (it >= 'a' && it <= 'z') {
                lc[it - 'a']++;
                if(uc[it - 'a'] > 0){
                    uc[it - 'a'] = INT_MIN;
                }
            } else {
                int val = lc[it - 'A'];
                int curVal = uc[it - 'A'];
                if(curVal < val){
                    uc[it - 'A']++;
                }else {
                    lc[it - 'A'] = INT_MIN;
                }
            }
        }
        int ans = 0;
        for (auto it : uc) {
            if(it > 0){
                ans++;
            }
        }
        return ans;
    }
};
