class Solution {
public:
    int forLoop(int low, int high) {
        // Your code goes here
        int ans = 0;
        for(int i = low;i <= high;i++){
            ans += i;
        }
        return ans;
    }
};
