class Solution{   
public:    
    int minBitsFlip(int start, int goal) { 
        //Your code goes here
        int ans = 0;
        for(int i = 0;i < 32;i++){
            int sBit = (start >> i) & 1;
            int gBit = (goal >> i) & 1;
            ans += (sBit ^ gBit);
        }
        return ans;
    }
};
