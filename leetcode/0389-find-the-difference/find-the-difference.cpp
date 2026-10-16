class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> mpp;
        for (auto it : s) {
            mpp[it]++;
        }
        char ans;
        for (auto it : t) {
            mpp[it]--;
            if(mpp[it] == 0){
                mpp.erase(it);
            }
        }
        for(auto it : mpp){
            ans = it.first;
        }
        return ans;
    }
};
