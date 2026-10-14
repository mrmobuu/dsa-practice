class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0,j = 0;
        int ans = 0;
        int n = s.size();
        map<int,int> mpp;
        while(j < n){
            mpp[s[j]]++;
            while(mpp[s[j]] > 1){
                mpp[s[i]]--;
                if(mpp[s[i]] == 0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            ans = max(j - i + 1,ans);
            j++;
        }
        return ans;
    }
};
