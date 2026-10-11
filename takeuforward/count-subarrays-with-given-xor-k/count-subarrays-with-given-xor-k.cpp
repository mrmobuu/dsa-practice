class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        map<int,int> mpp;
        int xr = 0,ans = 0;
        mpp[0] = 1;
        for(int i = 0;i < n;i++){
            int el = nums[i];
            xr ^= el;
            int req = xr ^ k;
            if(mpp.find(req) != mpp.end()){
                ans += mpp[req];
            }
            mpp[xr]++;
        }
        return ans;
    }
};
