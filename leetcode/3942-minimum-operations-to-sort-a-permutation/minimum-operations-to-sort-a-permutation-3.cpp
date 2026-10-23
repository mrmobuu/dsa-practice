class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        int inc = 0;
        int dec = 0;
        int minValIdx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                inc++;
            }
            if (nums[i - 1] < nums[i]) {
                dec++;
            }
            if(nums[i] == 0){
                minValIdx = i;
            }
        }
        if(nums[n - 1] > nums[0]){
            inc++;
        }
        if(nums[n - 1] < nums[0]){
            dec++;
        }
        if (inc == 1) {
            return min(minValIdx, 2 + n - minValIdx);
        }
        if (dec == 1) {
            return min(minValIdx + 2, n - minValIdx);
        }
        return -1;
    }
};
