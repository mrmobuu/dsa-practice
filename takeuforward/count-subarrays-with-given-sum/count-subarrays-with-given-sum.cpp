class Solution {
   public:
    int subarraySum(vector<int> &nums, int k) {
        int n = nums.size();
        map<int, int> mpp;
        int ans = 0,sum = 0;
        mpp[0] = 1;
        for (int i = 0; i < n; i++) {
            int el = nums[i];
            sum += el;
            int leftSum = sum - k;
            if(mpp.find(leftSum) != mpp.end()){
                ans += mpp[leftSum];
            }
            mpp[sum]++;
        }
        return ans;
    }
};
