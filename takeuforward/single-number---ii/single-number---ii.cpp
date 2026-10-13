class Solution {
public:
    int singleNumber(vector<int>& nums) {        
        //your code goes here
        int n = nums.size();
        int one = 0, two = 0,three = 0;
        for(auto it : nums){
            one = (one ^ it) & (~two);
            two = (two ^ it) & (~one);
        }
        return one;
    }
};
