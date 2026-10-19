class Solution {
   public:
    int divide(int dividend, int divisor) {
        // your code goes here
        if(divisor == dividend) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor == 1) return dividend;

        bool isNeg = dividend < 0 || divisor < 0 ? true : false;
        if (dividend < 0 && divisor < 0) {
            isNeg = false;
        }
        int ans = 0;
        long long divd = abs((long long)dividend);
        long long divi = abs((long long)divisor);

        while(divd >= divi){
            int count = 0;
            while(divd >= (divi << (count + 1))){
                count++;
            }
            ans += (1 << count);
            divd -= (divi << count);
        }


        return isNeg ? -ans : ans;
    }
};
