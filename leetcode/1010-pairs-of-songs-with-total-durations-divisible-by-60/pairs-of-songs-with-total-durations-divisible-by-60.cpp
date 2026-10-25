class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> mpp;
        int ans = 0;
        int n = time.size();
        for(int i = 0;i < n;i++){
            int val = (60 - time[i]) % 60;
            val = val < 0 ? 60 + val : val;
            // cout << i << " " << val << endl;
            if(mpp.find(val) != mpp.end()){
                ans += mpp[val];
            }
            mpp[(time[i] % 60)]++;
        }
        return ans;
    }
};
