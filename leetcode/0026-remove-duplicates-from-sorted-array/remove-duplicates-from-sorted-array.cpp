class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        int cntr = 1;
        for(int i = 0;i < n;i++){
            if(nums[i] != nums[j]){
                swap(nums[i],nums[j + 1]);
                j++;
                cntr++;
            }
        }
        return cntr;
    }
};
