class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long ans = 0;
        int n = hours.size();
        unordered_map<int,int> mpp;
        for(int i = 0;i < n;i++){
            int val = (24 - hours[i]) % 24;
            val = val < 0 ? 24 + val : val;
            // cout << val << endl;
            if(mpp.find(val) != mpp.end()){
                ans += mpp[val];
            }
            mpp[(hours[i] % 24)]++;
        }
        return ans;
    }
};
