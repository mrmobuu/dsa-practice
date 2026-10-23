class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int> sortedArr = nums;
        int n = nums.size();
        sort(sortedArr.begin(),sortedArr.end());
        if(nums == sortedArr){
            return 0;
        }
        int ans = -1;

        for(int i = 0;i < n;i++){
            if(nums[i] != sortedArr[i]){
                if(ans == -1){
                    ans = nums[i];
                }else{
                    ans &= nums[i];
                }
            }
            // cout << ans << endl;
        }
        return ans;

    }
};
