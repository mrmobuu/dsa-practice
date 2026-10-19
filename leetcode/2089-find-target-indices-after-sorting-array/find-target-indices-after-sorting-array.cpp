class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int cntr = 0;
        int elCntr = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] < target){
                cntr++;
            }else if(nums[i] == target){
                elCntr++;
            }
        }
        if(elCntr == 0){
            return ans;
        }
        while(elCntr--){
            ans.push_back(cntr);
            cntr++;
        }
        return ans;
    }
};
