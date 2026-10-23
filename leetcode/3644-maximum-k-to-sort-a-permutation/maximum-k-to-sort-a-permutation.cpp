class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int> sortedArr = nums;
        vector<int> temp;
        int n = nums.size();
        sort(sortedArr.begin(),sortedArr.end());
        if(nums == sortedArr){
            return 0;
        }
        for(int i = 0;i < n;i++){
            if(nums[i] != sortedArr[i]){
                temp.push_back(nums[i]);
            }
        }
        int ans = temp[0];
        for(auto it : temp){
            ans &= it;
            // cout << it << endl;
        }
        return ans;

    }
};
