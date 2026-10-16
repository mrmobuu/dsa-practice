const int mod=1e9+7;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        unordered_map<int,int> prev;
        unordered_map<int,int> front;
        for(int i = n - 1;i > 1;i--){
            front[nums[i]]++;
        }
        prev[nums[0]]++;
        for(int i = 1;i < n - 1;i++){
            int prevFreq = prev.count(nums[i] * 2) ? prev[nums[i] * 2] : 0;
            int nextFreq = front.count(nums[i] * 2) ? front[nums[i] * 2] : 0;
            ans = (ans % mod) + (1LL * (prevFreq % mod) * (nextFreq % mod)) % mod;
            prev[nums[i]]++;
            front[nums[i + 1]]--;
        }
        return ans;
    }
};
