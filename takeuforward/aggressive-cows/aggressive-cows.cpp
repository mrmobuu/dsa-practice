// todo again
class Solution {
    private:
    int helperFunc(int k,vector<int> &nums){
        int n = nums.size();
        int cows = 1,pos = nums[0];
        for(int i = 0; i < n;i++){
            if(nums[i] - pos >= k){
                cows++;
                pos = nums[i];
            }
        }
        return cows;
    }
   public:
    int aggressiveCows(vector<int> &nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int low = 1, high = nums[n - 1] - nums[0];
        while(low <= high){
            int mid = (low + high) / 2;
            int cows = helperFunc(mid,nums);
            if(cows >= k){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};
