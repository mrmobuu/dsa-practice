class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        vector<vector<string>> ans;
        map<map<int, int>, vector<string>> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            map<int, int> temp;
            for (auto it : nums[i]) {
                temp[it]++;
            }
            if (mpp.find(temp) == mpp.end()) {
                mpp[temp] = {nums[i]};
            } else {
                mpp[temp].push_back(nums[i]);
            }
        }
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
