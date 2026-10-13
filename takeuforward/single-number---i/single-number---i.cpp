class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        //your code goes here
        int n = nums.size();
        int xr = 0;
        for(auto it : nums){
            xr ^= it;
        }
        return xr;
    }
};
