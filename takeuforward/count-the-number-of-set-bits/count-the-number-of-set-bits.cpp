class Solution {
public:
    int countSetBits(int n) {
        // Your code goes here
        int ans = 0;
        while(n){
            n &= (n - 1);
            ans++;
        }
        return ans;
    }
};
