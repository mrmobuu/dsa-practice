class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int n1 = nums.size();
        int ans = 0;
        for(int i = 0; i < n;i++){
            int sum = 0;
            map<int,int> mpp;
            int tempAns = 0;
            for(int j = i;j < n;j++){
                sum += nums[j];
                mpp[nums[j]]++;
                for(auto it : mpp){
                    int val = sum - it.first;
                    // cout << i << " " << j << " " << sum << " " << it.first << endl;
                    // cout << "val % k =" << val % k << endl;
                    if(val % k == 0){
                        tempAns = j - i + 1;
                    }else{
                        tempAns = 0;
                        break;
                    }
                }
                ans = max(ans,tempAns);
            }
        }
        return ans;
    }
};
