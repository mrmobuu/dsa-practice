class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Your code goes here
        unordered_map<int,int> mpp;
        for(auto it : nums){
            if(mpp.find(it) != mpp.end()){
                return it;
            }
            mpp[it]++;
        }
        return -1;
    }
};
